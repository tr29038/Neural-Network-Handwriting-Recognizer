#include <iostream>

#include "encoder.h"
#include "input_parser.h"
#include "outputter.h"

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        std::cout << "Correct usage: " << argv[0] << " <input data file path>\n";
        return 1;
    }

    std::string input_file = argv[1];
    auto data = Input_Parser::parse(input_file);
    auto encodings = Encoder::encode(data.digits);
    Outputter::output(encodings);
    Outputter::output(data.digits);
}
