#pragma once

#include "data.h"

#include <vector>
#include <string>

struct Encoder
{
    static std::vector<std::string> encode(const std::vector<Data::digit_t>&);
};
