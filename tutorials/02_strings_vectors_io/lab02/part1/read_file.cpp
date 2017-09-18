#include <iostream>
#include <fstream>
#include <string>

std::string reverse(std::string const & st)
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
    std::string const inputFileName{ argv[1] };

    // you will have to remove this line when you complete your program
    std::cout << "File to read:  [" << inputFileName << "]" << std::endl;


    return 0;
}
