/* part2.cpp
   CSC 116 - Fall 2016 - Lab 9

*/

#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>

/* The four versions of sum_collection below each return the sum
   of all elements in the provided vector or set with element type
   int or string.
   
   Task: Write a single templated version of sum_collection to replace
   all four versions.
*/


int sum_collection(const std::vector<int>& V){
	int sum {};
	for(auto x: V)
		sum += x;
	return sum;
}

std::string sum_collection(const std::vector<std::string>& V){
	std::string sum {};
	for(auto x: V)
		sum += x;
	return sum;
}

int sum_collection(const std::set<int>& V){
	int sum {};
	for(auto x: V)
		sum += x;
	return sum;
}

std::string sum_collection(const std::set<std::string>& V){
	std::string sum {};
	for(auto x: V)
		sum += x;
	return sum;
}

template<typename T>
void print_collection( const T& V ){
	for(auto x: V)
		std::cout << x << " ";
	std::cout << std::endl;
}

int main()
{
	std::vector<int> int_vector {17, 6, 10};
	std::set<int> int_set {116,111,106,371};
	std::vector<std::string> string_vector {"Hello", " ", "World"};
	std::set<std::string> string_set { "Pear", "Pineapple", "Raspberry" };
	
	std::cout << "vector of ints: ";
	print_collection(int_vector);
	std::cout << "Sum: " << sum_collection(int_vector) << std::endl;
	
	std::cout << "set of ints: ";
	print_collection(int_set);
	std::cout << "Sum: " << sum_collection(int_set) << std::endl;
	
	std::cout << "vector of strings: ";
	print_collection(string_vector);
	std::cout << "Sum: " << sum_collection(string_vector) << std::endl;
	
	std::cout << "set of ints: ";
	print_collection(string_set);
	std::cout << "Sum: " << sum_collection(string_set) << std::endl;
	
	return 0;
}

