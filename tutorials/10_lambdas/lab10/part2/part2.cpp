/* part1.cpp
  
   CSC 116 Fall 2016 - Lab 10
   
*/
#include <iostream>
#include <string>
#include <stdexcept>
#include <algorithm>
#include <vector>
#include <functional>

using std::vector;


/* transform_vector_int_int(V, transform_func)
   Given an int vector V and a function transform_func which takes
   an int and returns an int, return a new int vector produced by
   applying the function to every element of V.
*/
vector<int> transform_vector_int_int(const vector<int>& V, std::function< int(int) > transform_func){
	/* Your code here */

}

/* transform_vector_string_string(V, transform_func)
   Given an int vector V and a function transform_func which takes
   an int and returns a string, return a new string vector produced by
   applying the function to every element of V.
*/
vector<std::string> transform_vector_string_string(const vector<std::string>& V, std::function< std::string(std::string) > transform_func){
	/* Your code here */

}

/* transform_vector_string_int(V, transform_func)
   Given an string vector V and a function transform_func which takes
   an string and returns an int, return a new int vector produced by
   applying the function to every element of V.
*/
vector<int> transform_vector_string_int(const vector<std::string>& V, std::function< int(std::string) > transform_func){
	/* Your code here */

}


/* transform_vector<S,T>(V, transform_func)
   Given a vector V of some type T and a transform function which takes
   an argument of type T and produces a value of a type S, create and return
   a new vector of S instances, produced by applying the transform function
   to every element of V.
   
   Obviously, this requires templates.
*/

/*Define transform_vector here*/






template<typename T>
void print_vector(const vector<T>& V){
	for(auto x: V)
		std::cout << x << " ";
	std::cout << std::endl;
}


int main()
{
	std::cout << "Enter a sequence of integers, ending with -1: ";
	int i;
	vector<int> VI {}, VICopy {};
	while(std::cin >> i && i != -1)
		VI.push_back(i);
		
	std::cout << std::endl;
	std::cout << "Vector VI: ";
	print_vector(VI);
	
		
	std::cout << "Enter a sequence of words: ";
	vector<std::string> VS {}, VSCopy{};
	std::string s;
	while(std::cin >> s)
		VS.push_back(s);
		
	std::cout << std::endl;
	std::cout << "Vector VS: ";
	print_vector(VS);
	std::cout << std::endl;
	
	
	
	vector<int> VI2 {};
	VICopy = VI;
	auto negate = [](int x) {
		return -x;
	};
	VI2 = transform_vector_int_int(VICopy, negate );
	std::cout << "Negation of VI: ";
	print_vector(VI2);
	std::cout << std::endl;
	
	VICopy = VI;
	auto add_six = [](int x){
		return x+6;
	};
	VI2 = transform_vector_int_int(VICopy, add_six);
	std::cout << "VI + 6: ";
	print_vector(VI2);
	std::cout << std::endl;
	
	
	vector<std::string> VS2 {};
	VSCopy = VS;
	auto string_length = [](std::string s){
		return s.length();
	};
	VI2 = transform_vector_string_int(VSCopy, string_length);
	std::cout << "Lengths of elements of VS: ";
	print_vector(VI2);
	std::cout << std::endl;
	
	VSCopy = VS;
	auto double_string = [](std::string s){
		return s+s;
	};
	VS2 = transform_vector_string_string(VSCopy, double_string);
	std::cout << "VS (doubled): ";
	print_vector(VS2);
	std::cout << std::endl;
	
	
	/* Tests of templated version */
	/* Uncomment when you have implemented transform_vector (otherwise the code won't compile)

	std::cout << "Template tests: " << std::endl;
	VICopy = VI;
	VI2 = transform_vector<int,int>(VICopy, negate );
	std::cout << "Negation of VI: ";
	print_vector(VI2);
	std::cout << std::endl;
	
	VICopy = VI;
	VI2 = transform_vector<int,int>(VICopy, add_six);
	std::cout << "VI + 6: ";
	print_vector(VI2);
	std::cout << std::endl;
	
	VSCopy = VS;
	VI2 = transform_vector<int,std::string>(VSCopy, string_length);
	std::cout << "Lengths of elements of VS: ";
	print_vector(VI2);
	std::cout << std::endl;
	
	VSCopy = VS;
	VS2 = transform_vector<std::string,std::string>(VSCopy, double_string);
	std::cout << "VS (doubled): ";
	print_vector(VS2);
	std::cout << std::endl;

	*/
	
	
    return 0;
}
