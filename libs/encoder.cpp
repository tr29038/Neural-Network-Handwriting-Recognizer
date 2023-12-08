#include "encoder.h"

#include <iostream>

//! @brief Given input_data (matrices of characters signifying a handwritten digit), transform them into corresponding linear strings, where each cell is delimited by a space to indicate a node.
//! @param input_data The input data.
//! @return The input data digits, encoded.
std::vector<std::string> Encoder::encode(const std::vector<Data::digit_t>& input_data)
{
    std::vector<std::string> encodings;
    for (const auto& digit : input_data)
    {
        std::string encoding;
        for (const auto& row : digit.first)
        {
            for (auto binary : row)
            {
                encoding.push_back(binary);
                encoding.push_back(' ');
            }
        }
        encoding.pop_back(); // Get rid of trailing space.
        encodings.push_back(encoding);
    }

    return encodings;
}
