#include "outputter.h"

#include <iostream>

const std::string Outputter::input_file = "input.txt";
const std::string Outputter::output_file = "output.txt";
const std::string Outputter::output_nodes_default = "0 0 0 0 0 0 0 0 0 0";

//! @brief Output the encoded data, each delimited by a new line.
//! @param encoded_data The list of encoded data.
void Outputter::output(const std::vector<std::string>& encoded_data)
{
    std::ofstream output_stream(input_file);
    for (const auto& encoded_datum : encoded_data)
        output_stream << encoded_datum << '\n';
    output_stream.close();
}

//! @brief Output the expected output nodes, where the nth node denotes corresponding actual number, denoted by a new line.
//! @param expected_output_data The list of digit data, where the second entry of any index denotes the actual digit.
void Outputter::output(const std::vector<Data::digit_t>& expected_output_data)
{
    std::ofstream output_stream(output_file);
    for (const auto& expected_output_datum : expected_output_data)
    {
        auto output_nodes = output_nodes_default;
        output_nodes[expected_output_datum.second * 2] = '1';
        output_stream << output_nodes << '\n';
    }
    output_stream.close();
}
