/* part1.cpp
   CSC 116 - Fall 2016 - Lab 9

*/

#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>

/* The three versions of sum_vector below each return the sum of
   all elements in the provided vector.
   
   Task: Write a single templated version of sum vector to replace
   all three versions
*/

int sum_vector(const std::vector<int>& V){
	int sum {};
	for(auto x: V)
		sum += x;
	return sum;
}

double sum_vector(const std::vector<double>& V){
	double sum {};
	for(auto x: V)
		sum += x;
	return sum;
}

std::string sum_vector(const std::vector<std::string>& V){
	std::string sum {};
	for(auto x: V)
		sum += x;
	return sum;
}

template<typename T>
void print_vector( const std::vector<T>& V ){
	for(auto x: V)
		std::cout << x << " ";
	std::cout << std::endl;
}

int main()
{
	std::vector<int> int_vector {6,10,17};
	std::vector<double> float_vector { 1.16, 1.11, 1.06, 3.71 };
	std::vector<std::string> string_vector {"Hello", " ", "World"};
	
	std::cout << "int vector: ";
	print_vector(int_vector);
	std::cout << "Sum: " << sum_vector(int_vector) << std::endl;
	
	std::cout << "float vector: ";
	print_vector(float_vector);
	std::cout << "Sum: " << sum_vector(float_vector) << std::endl;
	
	std::cout << "string vector: ";
	print_vector(string_vector);
	std::cout << "Sum: " << sum_vector(string_vector) << std::endl;
	
	return 0;
}

