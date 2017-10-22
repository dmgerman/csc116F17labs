/* part1.cpp

   CSC 116 Fall 2017 - Lab 6

*/
#include <iostream>
#include <string>
#include <stdexcept>
#include "matrix.hpp"

/* Do not modify the read_matrix function */
Matrix read_matrix(){
    std::cout << "Enter the number of rows and columns: " << std::endl;
    unsigned int rows, cols;
    if (!(std::cin >> rows) || !(std::cin >> cols)) {
        throw std::runtime_error("Invalid row or column count");
    }
    std::cout << "Enter the elements of the matrix: " << std::endl;
    Matrix M(rows,cols,0);
    for(unsigned int i = 0; i < rows; i++) {
        for (unsigned int j = 0; j < cols; j++) {
            double element;
            if (!(std::cin >> element)) {
                throw std::runtime_error("Invalid matrix element");
            }
            M.at(i,j) = element;
        }
    }
    std::cout << std::endl;
    std::cout << "Successfully read a matrix with dimensions " << rows << " x " << cols << std::endl;
    return M;
}


int main() {
    std::cout << "Reading first matrix" << std::endl;
    Matrix M1 = read_matrix();
    std::cout << "M1: " << std::endl;
    M1.print();
    std::cout << "Reading second matrix" << std::endl;
    Matrix M2 = read_matrix();
    std::cout << "M2: " << std::endl;
    M2.print();

    std::cout << "M1 == M2? " << ((M1==M2)?"true":"false") << std::endl;
    std::cout << "M1 != M2? " << ((M1!=M2)?"true":"false") << std::endl;
    std::cout << "2*M1:" << std::endl;
    (2*M1).print();
    std::cout << "3*M1:" << std::endl;
    (3*M1).print();
    std::cout << "M1*4:" << std::endl;
    (M1*4).print();
    try {
        std::cout << "M1+M2:" << std::endl;
        (M1+M2).print();
        std::cout << "M1-M2:" << std::endl;
        (M1-M2).print();
    }
    catch( std::domain_error e ) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}
