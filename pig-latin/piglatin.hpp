/**
 * This file contains the function declarations for all functions pertaining to the 
 * Pig Latin portion of the assignment.
 * 
 * @author James LaFarr
 * @version 12.13.22
 */

#ifndef PIGLATIN_HPP   
#define PIGLATIN_HPP

#include <string>
#include <vector>

bool is_vowel(char c);

bool is_letter(char c);

int find_first_vowel(std::string str);

std::vector<std::string> tokenize_from_index(std::string str, int idx);

std::string english_to_piglatin(std::string str);

void english_to_piglatin_ref(std::string &str);

#endif