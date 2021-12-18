#include <iostream>
#include <fstream>
#include <filesystem>

#include "part_one.hpp"
#include "part_two.hpp"


int main()
{
    auto base_dir = std::filesystem::path(std::filesystem::current_path()).parent_path();
    const std::string filename = base_dir.append("input.txt");

    std::ifstream file;

    file.open(filename);

    if (!file.is_open())
    {
        std::cout << "Can't open file: " << filename << std::endl;
        exit(EXIT_FAILURE);
    }

    // part_one(file);
    part_two(file);

    file.close();

    exit(EXIT_SUCCESS);
}