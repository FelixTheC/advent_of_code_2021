#include <iostream>
#include <filesystem>
#include <fstream>
#include <vector>
#include <complex>


std::vector<std::vector<int>> read_input_file(const std::string &file_path);

int power_consumption(const std::vector<std::vector<int>> &report);
int live_support(const std::vector<std::vector<int>> &report);
std::vector<std::vector<int>> transpose(const std::vector<std::vector<int>> &vector);
std::pair<int, int> find_common(const std::vector<int> &val);
template<typename Function>
std::vector<int> reduce(const std::vector<std::vector<int>> &vec, Function function, int counter);
int most_common(const std::vector<int> &val);
int least_common(const std::vector<int> &val);
int binary_to_decimal(const std::vector<int> &binary_vec);


int main() {
    auto base_dir = std::filesystem::path(std::filesystem::current_path()).parent_path();
    const std::string input_path = base_dir.append("input.txt");
    const std::vector<std::vector<int>> input = read_input_file(input_path);

    if (input.empty())
    {
        std::cout << "Incorrect file path" << std::endl;
        return 1;
    }

    int result = power_consumption(input);
    std::cout << "The power consumption is: " << result << std::endl;

    int live_support_result = live_support(input);
    std::cout << "The live support is: " << live_support_result << std::endl;

    return 0;
}

std::vector<std::vector<int>> read_input_file(const std::string &file_path) {
    std::fstream inputfile;
    std::vector<std::vector<int>> result = std::vector<std::vector<int>>{};

    inputfile.open(file_path, std::ios::in);

    if (inputfile.is_open()) {
        std::string line;
        while (getline(inputfile, line)) {
            std::vector<int> tmp_vec = std::vector<int>{};
            std::for_each(line.begin(),
                          line.end(),
                          [&tmp_vec](char val) {
                              int parsed_val = std::atoi(&val);
                              tmp_vec.push_back(parsed_val);
                          });
            result.push_back(tmp_vec);
        }
    }
    inputfile.close();
    return result;
}

int power_consumption(const std::vector<std::vector<int>> &report) {
    size_t columns = report[0].size();
    std::vector<int> gamma;
    std::vector<int> epsilon;

    for (size_t idx = 0; idx < columns; ++idx) {
        std::vector<int> row;
        std::for_each(report.begin(), report.end(),
                      [&](auto _row) {
                          row.push_back(_row[idx]);
                      });

        const int zeros = std::count(row.cbegin(), row.cend(), 0);
        const int ones = std::count(row.cbegin(), row.cend(), 1);

        if (zeros > ones) {
            gamma.push_back(0);
            epsilon.push_back(1);
        } else {
            gamma.push_back(1);
            epsilon.push_back(0);
        }
    }

    int gamma_result = binary_to_decimal(gamma);
    int epsilon_result = binary_to_decimal(epsilon);

    return gamma_result * epsilon_result;
}

std::vector<std::vector<int>> transpose(const std::vector<std::vector<int>> &vector)
{
    size_t columns = vector[0].size();
    std::vector<std::vector<int>> result;

    for (size_t idx = 0; idx < columns; ++idx)
    {
        std::vector<int> row;
        std::for_each(vector.begin(), vector.end(),
                     [&](auto _row) {row.push_back(_row[idx]);});
        result.push_back(row);
    }

    return result;
}

template<typename Function>
std::vector<int> reduce(const std::vector<std::vector<int>> &vec, Function function, int counter)
{
    if (vec.size() == 1)
        return vec[0];

    std::vector<std::vector<int>> transposed_vector = transpose(vec);
    int common = function(transposed_vector[counter]);

    std::vector<std::vector<int>> new_tmp;

    std::copy_if(vec.begin(), vec.end(),
                 std::back_inserter(new_tmp),
                 [&](auto _row) {return _row[counter] == common;});

    return reduce(new_tmp, function, ++counter);
}

int live_support(const std::vector<std::vector<int>> &report)
{
    std::vector<int> oxygen_binary = reduce(report, most_common, 0);
    int oxygen = binary_to_decimal(oxygen_binary);

    std::vector<int> CO2_scrubber_binary = reduce(report, least_common, 0);
    int CO2_scrubber = binary_to_decimal(CO2_scrubber_binary);

    return oxygen * CO2_scrubber;
}

int binary_to_decimal(const std::vector<int> &binary_vec)
{
    int decimal = 0;
    size_t counter = binary_vec.size() - 1;

    std::for_each(binary_vec.cbegin(), binary_vec.cend(),
                  [&](const int &val)
                  {
                    decimal += static_cast<int>(std::pow(2, counter) * val);
                    --counter;
                  });
    return decimal;
}

std::pair<int, int> find_common(const std::vector<int> &val)
{
    const int zeros = static_cast<int>(std::count(val.cbegin(), val.cend(), 0));
    const int ones = static_cast<int>(std::count(val.cbegin(), val.cend(), 1));

    return std::pair<int, int>{zeros, ones};
}

int most_common(const std::vector<int> &val)
{
    auto binary_pair = find_common(val);
    if (binary_pair.first > binary_pair.second)
        return 0;
    else
        return 1;
}

int least_common(const std::vector<int> &val)
{
    auto binary_pair = find_common(val);
    if (binary_pair.first > binary_pair.second)
        return 1;
    else
        return 0;
}
