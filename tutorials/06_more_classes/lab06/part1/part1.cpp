/* part1.cpp
   CSC 116 Fall 2017 - Lab 6
*/
#include <iostream>
#include <string>
#include <stdexcept>
#include "matrix.hpp"

/* Do not modify the read_matrix function */
Matrix read_matrix() {
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
    std::cout << "Reading matrix" << std::endl;
    Matrix M = read_matrix();
    std::cout << "M: " << std::endl;
    M.print();

    if (M.is_diagonal()) {
        std::cout << "M is diagonal." << std::endl;
    }
    else {
        std::cout << "M is not diagonal." << std::endl;
    }

    try {
        auto trace = M.trace();
        std::cout << "Trace of M: " << trace << std::endl;
    }
    catch(std::domain_error e) {
        std::cout << "Unable to compute trace: " << e.what() << std::endl;
    }
    return 0;
}
