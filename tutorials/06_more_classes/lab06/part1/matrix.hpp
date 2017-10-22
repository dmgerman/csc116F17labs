/* matrix.cpp

   CSC 116 Fall 2016 - Lab 6

*/
#ifndef MATRIX_HPP
#define MATRIX_HPP
#include <iostream>
#include <vector>
#include <stdexcept>

class Matrix{
public:

    /* *** Part 1 *** */

    /* Constructor( num_rows, num_cols )
       Create a matrix of the given size, with all values
       set to zero.
    */
    Matrix(unsigned int num_rows, unsigned int num_cols);

    /* Constructor( num_rows, num_cols, initial_value, default_value )
       Create a matrix of the given size, with all values
       set to the default value provided.
    */
    Matrix(unsigned int num_rows, unsigned int num_cols, double default_value);

    /* get_num_rows()
       Return the number of rows in the matrix
    */
    unsigned int get_num_rows() const;

    /* get_num_cols()
       Return the number of columns in the matrix
    */
    unsigned int get_num_cols() const;

    /* print()
       Output the matrix to standard output
    */
    void print() const;

    /* at(i,j)
       Return a reference to the element at row i, column j.
       If the provided indices are out of range, throw an instance
       of std::out_of_range with the message "Invalid indices"
    */
    double& at(unsigned int i, unsigned int j);

    /* at(i, j)
       Return a constant reference to the element at row i, column j.
       If the provided indices are out of range, throw an instance
       of std::out_of_range with the message "Invalid indices"
    */
    double const & at(unsigned int i, unsigned int j) const;

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
    double trace() const;

    /* is_diagonal()
       Return true if this matrix is square and diagonal (that is, if all of the non-diagonal
       elements are 0) and false otherwise.
    */
    bool is_diagonal() const;


    /* *** Part 2 *** */



    /* operator- (other_matrix)
       Compute the difference between this matrix and the provided matrix
       and return the result.

       If the provided matrix does not have matching dimensions to this
       matrix, throw a std::domain_error with the message "Incompatible dimensions"
    */
    Matrix operator-( Matrix const & other_matrix ) const;

    /* operator+ (other_matrix)
       Compute the sum of this matrix and the provided matrix
       and return the result.

       If the provided matrix does not have matching dimensions to this
       matrix, throw a std::domain_error with the message "Incompatible dimensions"
    */
    Matrix operator+( Matrix const & other_matrix ) const;

    /* operator*(scalar)
       Compute and return the product of this matrix and the provided scalar value.
       This only covers multiplication by a scalar on the right. Multiplication
       by a scalar on the left cannot be handled by an operator which is part of the class.
    */
    Matrix operator*( double scalar ) const;

private:
    //Storage for matrix elements
    std::vector<std::vector<double>> entries;
};


/* operator*( scalar, M )
   Compute and return the product of the provided scalar and provided matrix.
   Note that this operator is not part of the Matrix class, and therefore
   does not have access to the private members of that class, unless you add
   a friend directive for it.
*/
Matrix operator*( double scalar, Matrix const &  M );

/* operator==( M1, M2 )
   Return true if M1 and M2 have the same dimensions and
   are equal (element-wise) and false otherwise.
*/
bool operator==(Matrix const &  M1, Matrix const &  M2);

/* operator!=( M1, M2 )
   Return true if M1 and M2 are not equal. This should
   have the opposite behavior to the == operator.
*/
bool operator!=(Matrix const & M1, Matrix const & M2);

#endif
