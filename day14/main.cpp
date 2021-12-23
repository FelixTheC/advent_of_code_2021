//
// Created by felix on 21.12.21.
//
#include <iostream>
#include <set>
#include <climits>
#include "load_data.hpp"

const bool testing = false;

int main()
{
    std::map<std::string, std::string> rules;
    std::string _template;

    if(testing)
    {
        rules = load_data_from_file("testdata.txt");
        _template = "NNCB";
    }
    else
    {
        rules = load_data_from_file("input.txt");
        _template = "CPSSSFCFOFVFNVPKBFVN";
    }

    std::string tmp = "";

    for (int j = 0; j < 10; ++j)
    {
        for (int i = 1; i < _template.size(); ++i)
        {
            std::string _key (1, _template[i - 1]);
            _key += _template[i];
            if (rules.contains(_key))
            {
                tmp += _template[i - 1];
                tmp += rules[_key];
            }
        }
        tmp += _template[_template.size() - 1];
        _template = tmp;
        tmp.clear();
    }

    std::set<char> charSet (_template.begin(), _template.end());
    long _min = LLONG_MAX, _max = 0;
    for (auto &val: charSet)
    {
        long sum = std::count(_template.begin(), _template.end(), val);

        if (_min > sum)
            _min = sum;
        if (sum > _max)
            _max = sum;
    }

    std::cout << _max - _min << std::endl;

    exit(EXIT_SUCCESS);
}
