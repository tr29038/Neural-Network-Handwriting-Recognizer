#pragma once

#include <string>
#include <vector>
#include <utility>

struct Data
{
    using digit_t = std::pair<std::vector<std::string>, int>;

    int width, height;
    int depth;
    int density;
    std::vector<digit_t> digits;
};
