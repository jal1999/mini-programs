/**
 * This file is to be used as a testing file for the functions pertaining to
 * the Balance portion of the assignment.
 * 
 * @author James LaFarr
 * @version 12.13.22
 */

#include "balance.hpp"
#include <iostream>

int main() {
    std::cout << is_balanced("(())") << std::endl;
    std::cout << is_balanced("((()}}") << std::endl;
    return 0;
}