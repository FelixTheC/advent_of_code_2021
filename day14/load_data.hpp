//
// Created by felix on 23.12.21.
//

#ifndef DAY14_LOAD_DATA_HPP
#define DAY14_LOAD_DATA_HPP

#include <filesystem>
#include <fstream>
#include <map>
#include <stdexcept>

std::map<std::string, std::string> load_data_from_file(const std::string &filepath)
{
    auto base_dir = std::filesystem::path(std::filesystem::current_path()).parent_path();
    const std::string path = base_dir.append(filepath);

    std::fstream file;
    std::map<std::string, std::string> result;

    file.open(path, std::ios::in);

    if (file.is_open())
    {
        const std::string delimiter = " -> ";
        std::string line;

        while (getline(file, line))
        {
            auto key = line.substr(0, line.find(delimiter));
            auto value = line.substr(line.find(delimiter) + delimiter.size(), line.size() - 2);
            result.insert({key, value});
        }
    }
    else
    {
        throw std::invalid_argument("File not found.");
    }

    return result;
}
#endif //DAY14_LOAD_DATA_HPP
