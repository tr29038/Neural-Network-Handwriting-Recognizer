#pragma once

#include "data.h"

#include <fstream>
#include <string>
#include <vector>

struct Outputter
{
    static void output(const std::vector<std::string>&);
    static void output(const std::vector<Data::digit_t>&);

    private:
        static const std::string output_file;
        static const std::string input_file;
        static const std::string output_nodes_default;
};
