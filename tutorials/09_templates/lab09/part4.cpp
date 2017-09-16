/* part4.cpp
   CSC 116 - Fall 2016 - Lab 9

*/

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <stdexcept>

using std::string;

/* Consider the class IntStack below, which uses a vector to implement a
   stack of int values. The main function doesn't use the IntStack class,
   but instead uses the empty class Stack<T> to create stacks of an
   arbitrary type.
   
   To allow this file to compile before you've started working on it, all
   of the testing code is commented out in main(). You should uncomment it
   before starting your implementation.
   
   Task: Using the IntStack class as a model, implement the Stack<> class
   below (which must have push, pop and size methods).
*/

class IntStack{

	void push(int v){
		stack_values.push_back(v);
	}
	int pop(){
		if (size() <= 0)
			throw std::runtime_error("Pop from empty stack");
		int v = stack_values.back();
		stack_values.pop_back();
		return v;
	}
	int size(){
		return stack_values.size();
	}
private:
	std::vector<int> stack_values;
};

template<typename T>
class Stack{
public:
	
	/* Add push, pop and size methods here */
	
private:
	
	/* Add private data here */
	
};

int main()
{
	/* Uncomment when you write part 4
	Stack<int> istack;
	
	istack.push(6);
	istack.push(10);
	istack.pop();
	istack.push(17);
	istack.push(116);
	std::cout << "Integer stack contents: ";
	while(istack.size() > 0)
		std::cout << istack.pop() << " ";
	std::cout << std::endl;
	
	Stack<string> stringstack;
	
	stringstack.push("Raspberry");
	stringstack.push("Pineapple");
	stringstack.pop();
	stringstack.push("Pear");
	stringstack.push("Grapefruit");
	std::cout << "String stack contents: ";
	while(stringstack.size() > 0)
		std::cout << stringstack.pop() << " ";
	std::cout << std::endl;
		
	*/
	return 0;
}

