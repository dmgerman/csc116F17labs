/* part2.cpp
  
   CSC 116 Fall 2016 - Lab 4
   
*/
#include <iostream>
#include <cctype>
#include <string>
#include <vector>

// Define a type matrix_type which is a vector of vectors containing doubles.
typedef std::vector< std::vector< double > > matrix_type;

/* Functions to complete (Exercise 2A) */

/* trace(M)
   Compute the trace of the provided matrix and return it.
   
   The trace of a square matrix is the sum of the diagonal entries.
   For example, the trace of the matrix
      1 2 3
      4 5 6
      7 8 9
   is 15.
   
   If the provied matrix is not square or has no entries (that is, if the
   number of rows or columns is zero), it is not possible to compute
   the trace. In such a case, the function must throw a std::domain_error
   with message "Unable to compute trace of a non-square matrix"
*/
   
double trace( const matrix_type& M ){
}

/* add_matrices(A, B)
   Compute the (pointwise) sum of matrices A and B and return it.
   
   If A and B do not have matching row and column counts,
   throw a std::domain_error with the error message "Incompatible matrix dimensions".
   
   Use your solution for part 1 as a starting point for this implementation.
*/
matrix_type add_matrices( const matrix_type& A, const matrix_type& B ){
	
}

/* End of functions to complete */


void print_matrix( matrix_type M ){
	for (auto row: M){
		for(auto entry: row)
			std::cout << entry << " ";
		std::cout << std::endl;
	}
}


/* Do not modify the read_matrix function */
matrix_type read_matrix(){
	std::cout << "Enter the number of rows and columns: " << std::endl;
	unsigned int rows, cols;
	if (!(std::cin >> rows) || !(std::cin >> cols)){
		throw std::runtime_error("Invalid row or column count");		
	}
	std::cout << "Enter the elements of the matrix: " << std::endl;
	matrix_type M;
	for(unsigned int i = 0; i < rows; i++){
		std::vector<double> v;
		for (unsigned int j = 0; j < cols; j++){
			double element;
			if (!(std::cin >> element)){
				throw std::runtime_error("Invalid matrix element");
			}
			v.push_back(element);
		}
		M.push_back(v);
	}
	std::cout << std::endl;
	std::cout << "Successfully read a matrix with dimensions " << rows << " x " << cols << std::endl;
	return M;
}

int main()
{
	matrix_type M1;
	matrix_type M2;
	/* Exercise 2B:
	   Modify the code below to handle the case where
	   read_matrix() throws an exception because the matrix
	   could not be read.
	*/
	std::cout << "Reading first matrix" << std::endl;
	M1 = read_matrix();
	std::cout << "M1: " << std::endl;
	print_matrix(M1);
	std::cout << "Reading second matrix" << std::endl;
	M2 = read_matrix();
	std::cout << "M2: " << std::endl;
	print_matrix(M2);
	/* End of Exercise 2B */
	
	std::cout << "Sum of M1 and M2: " << std::endl;
	try{
		matrix_type S = add_matrices(M1, M2);
		print_matrix(S);
	} catch(std::domain_error e){
		std::cout << "Error adding matrices: " << e.what() << std::endl;
	}
	
	try{
		double t = trace(M1);
		std::cout << "Trace of M1: " << t << std::endl;
	} catch(std::domain_error e){
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	return 0;
}
