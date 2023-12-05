#include <iostream>

int main(int argc, char* argv[])
{
    if (argc != 1)
    {
        std::cout << "Correct usage: " << argv[0] << " <input data file path>\n";
        return 1;
    }
}
