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


/* Provided functions: apply_to_all (two versions), apply_to_alternating (two versions) */
/* Note that both of the functions below could be condensed into more concise
   versions by using templates */


/* apply_to_all(int_vec, function_to_apply)
   Given a vector of ints and a function (which takes a reference to an element
   of the vector), apply the function to each element of the vector, in forwards order.
*/
void apply_to_all(vector<int>& int_vec, std::function<void(int&)> function_to_apply){
	for(int& x: int_vec)
		function_to_apply(x);
}

/* apply_to_all(string_vec, function_to_apply)
   Given a vector of strings and a function (which takes a reference to an element
   of the vector), apply the function to each element of the vector, in forwards order.
*/
void apply_to_all(vector<std::string>& string_vec, std::function<void(std::string&)> function_to_apply){
	for(std::string& x: string_vec)
		function_to_apply(x);
}


/* apply_to_alternating(int_vec, function_to_apply)
   Given a vector of ints and a function (which takes a reference to an element
   of the vector), apply the function to every second element of the vector, starting
   at element 0, in forwards order.
*/
void apply_to_alternating(vector<int>& int_vec, std::function<void(int&)> function_to_apply){
	for(unsigned int i = 0; i < int_vec.size(); i += 2)
		function_to_apply(int_vec.at(i));
}

/* apply_to_alternating(string_vec, function_to_apply)
   Given a vector of strings and a function (which takes a reference to an element
   of the vector), apply the function to every second element of the vector, starting
   at element 0, in forwards order.
*/
void apply_to_alternating(vector<std::string>& string_vec, std::function<void(std::string&)> function_to_apply){
	for(unsigned int i = 0; i < string_vec.size(); i += 2)
		function_to_apply(string_vec.at(i));
}















/* Exercise: Complete the functions below, without using any kind of loop.
			 You can use the functions above, or any of the standard library
			 iteration functions (e.g. std::accumulate or std::transform).
*/

/* Exercise 0: Print int or string vectors (already done) */
void print_vector(vector<int>& V){
	//To print a vector, apply the following function to each element.
	auto print_element = [](int& element) {
		std::cout << element << " ";
	};
	apply_to_all(V, print_element);
	std::cout << std::endl;
}
void print_vector(vector<std::string>& V){
	//To print a vector, apply the following function to each element.
	auto print_element = [](std::string& element) {
		std::cout << element << " ";
	};
	apply_to_all(V, print_element);
	std::cout << std::endl;
}



/* Exercise 1: Print every second element of the provided int vector.        */
void print_vector_alternating(vector<int>& V){
	/* If the vector contains the elements {6,10,1,19,106,111,116},          */
	/* the output will be "6 1 106 116", followed by a newline.              */
	
	/* Your code here */

}

/* Exercise 2: Modify the elements of the provided string vector by doubling
               each element (so the string "Hello" becomes "HelloHello").
           	   Do not generate any output.	                                 */
void double_vector_elements(vector<std::string>& V){
	/* If the vector contains the elements {"Apple","Pear","Raspberry"}, the */
	/* vector will contain {"AppleApple","PearPear","RaspberryRaspberry"}    */
	/* when this function ends.                                              */
	
	/* Your code here */

}

/* Exercise 3: Negate every second element of the provided int vector.       */
void negate_alternating(vector<int>& V){
	/* If the vector contains the elements {6,10,1,100}, the vector will     */
	/* contain {-6,10,-1,100} when this function ends.                       */
	
	/* Your code here */

}


/* Exercise 4: Print an int vector with an offset value added to each        
               element. Do not modify the input vector.
               You may want to use variable capturing in your lambdas.       */
void print_vector_offset(vector<int>& V, int offset){
	/* If the vector contains the elements {6,10,1} and the offset is 100,   */
	/* the output will be "106 110 101".                                     */
	
	/* Your code here */

}


/* Exercise 5: Compute and return the sum of int or string vectors.          */
int sum_vector(vector<int>& V){
	/* If the vector contains the elements {6,10,1}, the sum will be 17      */
	
	int sum {};
	/* Your code here */

	return sum;
}
std::string sum_vector(vector<std::string>& V){
	/* If the vector contains the elements {"Apple","Pear","Raspberry"}, the */
	/* sum is the string "ApplePearRaspberry"                                */
	
	std::string sum {};
	/* Your code here */

	return sum;
}

/* Exercise 6: Compute and return the sum of int or string vectors.          
               This version should work for both int and string vectors
               via templates.                                                */
template<typename T>
T sum_vector_templated(vector<T>& V){
	T sum {};
	/* Your code here */

	return sum; //Placeholder
}

/* Exercise 7: Find the longest string in the provided string vector.        */
std::string longest_string(vector<std::string>& V){
	/* If the vector contains the elements {"Apple","Raspberry","Pear"}, the */
	/* function will return "Raspberry".                                     */
	
	std::string longest {};
	/* Your code here */

	return longest;
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
	
	std::cout << "print_vector_alternating: ";
	VICopy = VI;
	print_vector_alternating(VICopy);
	std::cout << std::endl;
	
	std::cout << "double_vector_elements: ";
	VSCopy = VS;
	double_vector_elements(VSCopy);
	print_vector(VSCopy);
	std::cout << std::endl;
	
	std::cout << "negate_alternating: ";
	VICopy = VI;
	negate_alternating(VICopy);
	print_vector(VICopy);
	std::cout << std::endl;
	
	std::cout << "print_vector_offset (offset 6): ";
	VICopy = VI;
	print_vector_offset(VICopy,6);
	std::cout << std::endl;
	
	std::cout << "print_vector_offset (offset 9): ";
	VICopy = VI;
	print_vector_offset(VICopy,9);
	std::cout << std::endl;
	
	std::cout << "sum_vector(VI): ";
	VICopy = VI;
	std::cout << sum_vector(VI) << std::endl;
	std::cout << "sum_vector(VS): ";
	VSCopy = VS;
	std::cout << sum_vector(VS) << std::endl << std::endl;
	
	std::cout << "sum_vector_templated(VI): ";
	VICopy = VI;
	std::cout << sum_vector_templated(VI) << std::endl;
	std::cout << "sum_vector_templated(VS): ";
	VSCopy = VS;
	std::cout << sum_vector_templated(VS) << std::endl << std::endl;
	
	std::cout << "longest_string(VS): ";
	VSCopy = VS;
	std::cout << longest_string(VS) << std::endl << std::endl;
	
	
	
	
	
	
    return 0;
}
