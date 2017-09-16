#include <iostream>
#include <fstream>
#include <string>

std::string reverse(const std::string &st)
{
    std::string result {};

    // write your code here
    
    return result;
}


int main(int argc, char *argv[])
{
    if (argc != 2) {
        std::cout << "Usage " << argv[0] << " <filename>" << std::endl;
        exit(1);
    }
    std::string inputFileName = argv[1];

    // you will have to remove this line when you complete your progrma
    std::cout << "File to read:  [" << inputFileName << "]" << std::endl;


    return 0;
}
