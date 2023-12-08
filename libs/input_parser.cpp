#include "input_parser.h"

#include <iostream>
#include <fstream>

Data Input_Parser::parse(const std::string& input_file)
{
    std::ifstream input_stream(input_file);
    std::string null_str, property_str;
    Data data;

    // Delete headers
    std::getline(input_stream, null_str);
    std::getline(input_stream, null_str);
    std::getline(input_stream, null_str);

    // Get main variables
    std::getline(input_stream, null_str, '=');
    std::getline(input_stream, null_str, ' ');
    std::getline(input_stream, property_str);
    data.width = std::stoi(property_str);

    std::getline(input_stream, null_str, '=');
    std::getline(input_stream, null_str, ' ');
    std::getline(input_stream, property_str);
    data.height = std::stoi(property_str);

    std::getline(input_stream, null_str, '=');
    std::getline(input_stream, null_str, ' ');
    std::getline(input_stream, property_str);
    data.depth = std::stoi(property_str);

    std::getline(input_stream, null_str, '=');
    std::getline(input_stream, null_str, ' ');
    std::getline(input_stream, property_str);
    data.density = std::stoi(property_str);

    // Temp
    for (int i = 0; i < 14; ++i)
    {
        std::getline(input_stream, null_str, '=');
        std::getline(input_stream, null_str, ' ');
        std::getline(input_stream, property_str);
        //data = std::stoi(property_str);
    }

    std::string digit_row, digit_actual;
    while (input_stream.peek() != EOF)
    {
        Data::digit_t digit;
        for (int row = 0; row < data.height; ++row)
        {
            std::getline(input_stream, digit_row);
            digit.first.push_back(digit_row);
        }
        std::getline(input_stream, null_str, ' ');
        std::getline(input_stream, digit_actual);
        digit.second = std::stoi(digit_actual);
        data.digits.push_back(digit);
    }

    return data;
}
