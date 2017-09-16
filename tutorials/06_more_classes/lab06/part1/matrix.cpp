/* matrix.cpp
  
   CSC 116 Fall 2016 - Lab 6
   
*/
#include <iostream>
#include <string>
#include <stdexcept>
#include <cmath>
#include "matrix.hpp"



/* Constructor( num_rows, num_cols )
   Create a matrix of the given size, with all values
   set to zero.
*/
Matrix::Matrix(unsigned int num_rows, unsigned int num_cols){

}


/* Constructor( num_rows, num_cols, initial_value, default_value )
   Create a matrix of the given size, with all values
   set to the default value provided.
*/
Matrix::Matrix(unsigned int num_rows, unsigned int num_cols, double default_value){

}

/* get_num_rows()
   Return the number of rows in the matrix
*/
unsigned int Matrix::get_num_rows(){

}

/* get_num_cols()
   Return the number of columns in the matrix
*/
unsigned int Matrix::get_num_cols(){

}


/* print()
   Output the matrix to standard output
*/
void Matrix::print(){
	for(unsigned int i {0}; i < get_num_rows(); i++){
		for(unsigned int j {0}; j < get_num_cols(); j++)
			std::cout << at(i,j) << " ";
		std::cout << std::endl;
	}
}

/* at(i,j)
   Return a reference to the element at row i, column j.
   If the provided indices are out of range, throw an instance
   of std::out_of_range with the message "Invalid indices"
*/
double& Matrix::at(unsigned int i, unsigned int j){

}

/* trace()
   Compute and return the trace of this matrix.
   
   The trace of a square matrix is the sum of the diagonal entries.
   For example, the trace of the matrix
	  1 2 3
	  4 5 6
	  7 8 9
   is 15.
   
   If this matrix is not square, the method must throw a std::domain_error
   with message "Unable to compute trace of a non-square matrix".
*/
double Matrix::trace(){

}

/* is_diagonal()
   Return true if this matrix is square and diagonal (that is, if all of the non-diagonal
   elements are 0) and false otherwise.
*/
bool Matrix::is_diagonal(){

}

/* *** Part 2 *** */

/* Methods of Matrix class */

/* operator- (other_matrix)
   Compute the difference between this matrix and the provided matrix
   and return the result.
   
   If the provided matrix does not have matching dimensions to this
   matrix, throw a std::domain_error with the message "Incompatible dimensions"
*/
Matrix Matrix::operator-( Matrix other_matrix ){

}

/* operator+ (other_matrix)
   Compute the sum of this matrix and the provided matrix
   and return the result.
   
   If the provided matrix does not have matching dimensions to this
   matrix, throw a std::domain_error with the message "Incompatible dimensions"
*/
Matrix Matrix::operator+( Matrix other_matrix ){

}

/* operator*(scalar)
   Compute and return the product of this matrix and the provided scalar value.
   This only covers multiplication by a scalar on the right. Multiplication
   by a scalar on the left cannot be handled by an operator which is part of the class.
*/
Matrix Matrix::operator*( double scalar ){

}


/* Functions outside Matrix class */


/* operator*( scalar, M )
   Compute and return the product of the provided scalar and provided matrix.
   Note that this operator is not part of the Matrix class, and therefore
   does not have access to the private members of that class, unless you add
   a friend directive for it.
*/
Matrix operator*( double scalar, Matrix M ){

}

/* Floating point types should never be compared for equality directly,
   since they have inherent inaccuracies. Instead, use the function below
   to test whether two doubles are equal to within a tolerance of 10^{-7}.
*/
bool doubles_equal( double a, double b ){
	return fabs(a-b) < 1e-7;
}

/* operator==( M1, M2 )
   Return true if M1 and M2 have the same dimensions and
   are equal (element-wise) and false otherwise.
   
   Use the doubles_equal function above to compare values.
*/
bool operator==(Matrix M1, Matrix M2){


}
/* operator!=( M1, M2 )
   Return true if M1 and M2 are not equal. This should
   have the opposite behavior to the == operator.
*/
bool operator!=(Matrix M1, Matrix M2){
	
}
