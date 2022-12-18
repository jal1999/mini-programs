/**
 * This file contains the function definitions for all functions pertaining to the 
 * Balance portion of the assignment.
 * 
 * @author James LaFarr
 * @version 12.13.22
 */

#include "balance.hpp"
#include <stack>
#include <iostream>
#include <stdexcept>

bool contains_illegal_chars(std::string str) {
    for (int i = 0; i < str.length(); ++i) {
        char c = str[i];
        if ((c != '(') && (c != ')') && (c != '}') && (c != '{')) {
            return true;
        }
    }
    return false;
}

bool is_balanced(std::string str) {
    if (contains_illegal_chars(str)) {
        throw std::invalid_argument(std::string("Argument: ") + str + " not allowed. May only contain '(', ')', '{', '}'.");
    }

    std::stack<char> stack;
    for (int i = 0; i < str.length(); ++i) {
        char c = str[i];
        if ((c == '(' || c == '{')) {
            stack.push(c);
        } else {
            if ((c == '}' && stack.top() != '{') || (c == ')' && stack.top() != '(')) {
                return false;
            }
            stack.pop();
        }
    }
    return stack.empty();
}