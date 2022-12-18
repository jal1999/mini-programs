/**
 * This file is to be used as a testing file for the functions pertaining to
 * the Sum Numbers portion of the assignment.
 * 
 * @author James LaFarr
 * @version 12.13.22
 */

#include "sum.hpp"
#include <iostream>

int main() {
    int sum = sum_number("input.txt");
    std::cout << sum << std::endl;
    return 0;
}