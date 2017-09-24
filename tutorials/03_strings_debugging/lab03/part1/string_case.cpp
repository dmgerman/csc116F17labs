/* string_case.cpp

   CSC 116 Fall 2017 - Lab 3
   Various functions involving uppercase and lowercase letters.

   Warning: The code below contains several bugs.

   Exercise: Find and fix the bugs.

*/
#include <iostream>
#include <cctype>
#include <string>

/* count_case(s, uppercase, lowercase)
   Count the number of uppercase and lowercase letters in the provided
   string s. The respective counts of each type of letter are stored
   in the provided integer references.

   The functions isupper(c) and islower(c), in cctype.h, may be useful
   for deciding if a character is uppercase or lowercase.

   The code below contains at least one logical error.

*/
void count_case(std::string const & s, int & uppercase, int & lowercase)
{
    uppercase = 0;
    lowercase = 0;
    for(unsigned int i {0}; i < s.length(); i++)
    {
        char const c { s.at(i) };
        if (isupper(c))
        {
            uppercase++;
        }
        else
        {
            lowercase++;
        }
    }
}

/* remove_uppercase(s)
   Given a string s, return a new string containing all of the
   non-uppercase letters of s.

   The function below contains an off-by-one error.
*/
std::string remove_uppercase( std::string const & s)
{
    std::string output {};
    for(unsigned int i {0}; i <= s.length(); i++)
    {
        output += s.at(i);
    }
    return output;
}

int main()
{
    std::string input_string {};

    std::cout << "Enter a string: ";
    if (std::getline( std::cin, input_string ))
    {
        std::cout << "The input is: \"" << input_string << "\"" << std::endl;

        std::string no_caps = remove_uppercase(input_string);
        std::cout << "With capital letters removed: \"" << no_caps << "\"" << std::endl;

        int uppercase_count {}, lowercase_count {};
        count_case(input_string, uppercase_count, lowercase_count);
        std::cout << "The input contains " << uppercase_count << " uppercase letters and " << lowercase_count << " lowercase letters." << std::endl;
    }
    else
    {
        std::cout << "Error: No input provided" << std::endl;
        return 1;
    }

    return 0;
}
