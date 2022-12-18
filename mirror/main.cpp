/**
 * This file is to be used as a testing file for the functions pertaining to
 * the Mirror portion of the assignment.
 * 
 * @author James LaFarr
 * @version 12.13.22
 */

 #include "mirror.hpp"
 #include <iostream>

 int main() {
    int **matrix = new int*[4];
    int one[] = {6, 1, 9, 4};
    int two[] = {-2, 5, 8, 12};
    int three[] = {14, 39, -6, 18};
    int four[] = {21, 55, 73, -3};
    matrix[0] = one;
    matrix[1] = two;
    matrix[2] = three;
    matrix[3] = four;
    for (int i = 0; i < 4; ++i) {
        std::cout << "[ ";
        for (int j = 0; j < 4; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "]" << std::endl;
    }
    std::cout << std::endl;
    int **new_matrix = mirror(matrix, 4, 4);
    for (int i = 0; i < 4; ++i) {
        std::cout << "[ ";
        for (int j = 0; j < 4; ++j) {
            std::cout << new_matrix[i][j] << " ";
        }
        std::cout << "]" << std::endl;
    }
    return 0;
 }