/**
 * This file contains the function declarations for all functions pertaining to
 * the Sum Numbers portion of the assignment.
 * 
 * @author James LaFarr
 * @version 12.13.22
 */

#ifndef SUM_H
#define SUM_H

#include <vector>

int sum_number(std::string filename);

int string_to_int(std::string str);

std::vector<std::string> tokenize_string(std::string str, char separator);

bool is_int(std::string str);

#endif