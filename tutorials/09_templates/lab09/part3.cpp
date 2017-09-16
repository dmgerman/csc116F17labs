/* part3.cpp
   CSC 116 - Fall 2016 - Lab 9

*/

#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>

using std::string;



/* The three versions of find_matching_keys below each return a set of
   all keys in a map which map to a specified value.
   
   Task: Write a single templated version of find_matching_keys to replace
   all three versions.
*/

/* Given a map which maps strings to ints, return a set of all keys
   which map to the provided value */
std::set<string> find_matching_keys( const std::map< string, int >& M, int search_value){
	std::set<string> result {};
	for(auto P: M){
		auto key = P.first;
		auto value = P.second;
		if(search_value == value)
			result.insert(key);
	}
	return result;
}


/* Given a map which maps strings to strings, return a set of all keys
   which map to the provided value */
std::set<string> find_matching_keys( const std::map< string, string >& M, string search_value){
	std::set<string> result {};
	for(auto P: M){
		auto key = P.first;
		auto value = P.second;
		if(search_value == value)
			result.insert(key);
	}
	return result;
}


/* Given a map which maps ints to strings, return a set of all keys
   which map to the provided value */
std::set<int> find_matching_keys( const std::map< int, string >& M, string search_value){
	std::set<int> result {};
	for(auto P: M){
		auto key = P.first;
		auto value = P.second;
		if(search_value == value)
			result.insert(key);
	}
	return result;
}

template<typename T>
void print_set( const std::set<T>& V ){
	for(auto x: V)
		std::cout << x << " ";
	std::cout << std::endl;
}

int main()
{
	std::map< string, int > fruit_prices { {"Raspberry", 10}, {"Grapefruit",7}, {"Pineapple", -10}, {"Pear", 10}, {"Pomegranate", 5} };
	
	std::map<string, string> prerequisites { {"MATH 101", "MATH 100"}, {"MATH 122", "MATH 100"}, {"CSC 116", "CSC 111"} };
	
	std::map<int, string> letter_grades { {87, "A"}, {68,"C+"}, {71, "B-"}, {66, "C+"}, {93, "A+"}, {88,"A"} };
	
	std::cout << "Fruits with price 10: ";
	print_set( find_matching_keys( fruit_prices, 10 ) );
	
	std::cout << "Courses requiring MATH 100: ";
	print_set( find_matching_keys( prerequisites, "MATH 100" ) );
	
	std::cout << "A grades: ";
	print_set( find_matching_keys( letter_grades, "A" ) );
	
	return 0;
}

