#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main(int argc, char *argv[])
{
    if (argc != 2) {
        std::cout << "Usage " << argv[0] << " <filename>" << std::endl;
        exit(1);
    }
    std::string inputFileName = argv[1];

    // write your solution here

    return 0;
}
