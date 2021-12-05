//
// Created by felix on 05.12.21.
//
#include <filesystem>
#include <fstream>
#include "Diagram.hpp"


std::vector<int> split(const std::string &line)
{
    std::vector<int> result;
    result.reserve(4);

    std::stringstream sstream(line);

    std::string str;
    while (std::getline(sstream, str, ',')) {
        std::string needle = " -> ";
        auto tmp = str.find(needle);

        if (tmp < str.size())
        {
            auto sub1 = std::stoi(str.substr(0, tmp));
            auto sub2 = std::stoi(str.substr(tmp + needle.size(), str.size()));
            result.emplace_back(sub1);
            result.emplace_back(sub2);
        }
        else
            result.emplace_back(std::stoi(str));
    }

    return result;
}

int main()
{
    auto diagram = Diagram(990, 990);

    auto base_dir = std::filesystem::path(std::filesystem::current_path()).parent_path();
    const std::string input_path = base_dir.append("input.txt");

    std::fstream inputfile;
    inputfile.open(input_path, std::ios::in);
    if (inputfile.is_open())
    {
        std::string line;
        while (getline(inputfile, line)) {
                diagram.add_entries(split(line));
            }
    }
    inputfile.close();
    std::cout << diagram.points_with_min_x_visits(2);
    //diagram.display();

    return 0;
}
