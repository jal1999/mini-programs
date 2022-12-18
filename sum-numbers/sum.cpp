/**
 * This file contains the function definitions for all functions pertaining to
 * the Sum Numbers portion of the assignment.
 *
 * @author James LaFarr
 * @version 12.13.22
 */

#include "sum.hpp"
#include <stdexcept>
#include <cmath>
#include <string>
#include <fstream>
#include <iostream>

int sum_number(std::string filename) {
    std::ifstream input(filename);
    int sum = 0;
    std::string line;
    while (std::getline(input, line)) {
        std::vector<std::string> tokens = tokenize_string(line, ' ');
        for (std::string token : tokens) {
            if (is_int(token)) {
                sum += string_to_int(token);
            }
        }
    }
    return sum;
}

int string_to_int(std::string str) {
    bool negative = str[0] == '-';
    if (negative) str.erase(0, 1);
    int total = 0;
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == '-') continue;
        if ((str[i] < 48 && str[i] != 45) || (str[i] > 57)) {
            throw std::invalid_argument(str);
        }
        int char_to_int = str[i] - '0';
        total += pow(10, (str.length() - i - 1)) * char_to_int;
    }
    return negative ? -total : total;
}

bool is_int(std::string str) {
    for (char c : str) {
        if ((c < '0' && c != '-') || (c > '9' && c != '-')) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> tokenize_string(std::string str, char separator) {
    std::vector<std::string> tokens;
    int start_idx = 0, sep_idx;
    while ((sep_idx = str.find(separator, start_idx)) != -1) {
        tokens.push_back(str.substr(start_idx, (sep_idx - start_idx)));
        start_idx = sep_idx + 1;
    }
    sep_idx = str.find('\n', start_idx);
    tokens.push_back(str.substr(start_idx, (sep_idx - start_idx)));
    return tokens;
}