/**
 * This file is to be used as a testing file for the functions pertaining to
 * the Pig Latin portion of the assignment.
 * 
 * @author James LaFarr
 * @version 12.13.22
 */

#include "piglatin.hpp"
#include <iostream>

int main() {
    std::string pig = english_to_piglatin("julie");
    std::string s = "julie";
    english_to_piglatin_ref(s);
    std::cout << s << std::endl;
    return 0;
}