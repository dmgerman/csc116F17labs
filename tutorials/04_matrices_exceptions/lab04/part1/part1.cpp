/* part1.cpp
  
   CSC 116 Fall 2016 - Lab 4
   
*/
#include <iostream>
#include <vector>

// Define a type Matrix which is a vector of vectors containing doubles.
using matrix_type = std::vector< std::vector< double > >;

/* Functions to complete */


/* add_matrices(A, B)
   Compute the (pointwise) sum of matrices A and B and return it.
   
   For part 1, you may assume that A and B have compatible dimensions.
   
*/
matrix_type add_matrices( const matrix_type& A, const matrix_type& B ){
	
}

/* identity(n)
   Compute and return the n x n identity matrix.
   
   Recall that the identity matrix of size n has 1s on the diagonal and
   0s everywhere else.
   
*/

matrix_type identity( unsigned int n ){
	
}

/* hilbert(n)
   Compute and return the n x n Hilbert matrix.
   
   The Hilbert matrix has entry (i,j) set to 1/(i + j - 1), for
   each row i and column j in the range (1,2,3,..., n).
   Note that in the definition above, row indices and column
   indices start at 1, not 0.
   
   For example, the 3x3 Hilbert matrix is
	1    1/2  1/3
	1/2  1/3  1/4 
	1/3  1/4  1/5
   
*/

matrix_type hilbert( unsigned int n ){
	
}



/* End of functions to complete */


void print_matrix( matrix_type M ){
	for (auto row: M){
		for(auto entry: row)
			std::cout << entry << " ";
		std::cout << std::endl;
	}
}

int main()
{
   
	int n;
	
	std::cout << "Enter the value of n: ";
	if (!(std::cin >> n) || (n <= 0) ){
		std::cout << "Invalid value for n." << std::endl;
		return 1;
	}
	
	matrix_type I = identity(n);
	std::cout << "Identity (" << n << " x " << n << "):" << std::endl;
	print_matrix(I);
	
	matrix_type H = hilbert(n);
	std::cout << "Hilbert (" << n << " x " << n << "):" << std::endl;
	print_matrix(H);
	
	
	matrix_type S = add_matrices(I,H);
	std::cout << "Sum of I and H:" << std::endl;
	print_matrix(S);
	
    return 0;
}
