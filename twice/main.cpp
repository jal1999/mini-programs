/**
 * This file is to be used as a testing file for the functions pertaining to
 * the Twice portion of the assignment.
 * 
 * @author James LaFarr
 * @version 12.13.22
 */

#include <iostream>
#include <vector>
#include "twice.hpp"

int main() {
    std::vector<int> x = {1, 3, 1, 4, 3, 7, -2, 0, 7, -2, -2, 1};
    std::vector<int> ret = twice(x);
    for (int i : ret) {
        std::cout << i << std::endl;
    }
    return 0;
}