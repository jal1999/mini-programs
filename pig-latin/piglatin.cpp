/**
 * This file contains the function definitions for all functions pertaining to the 
 * Pig Latin portion of the assignment.
 * 
 * @author James LaFarr
 * @version 12.13.22
 */

#include "piglatin.hpp"

bool is_vowel(char c) {
    switch(c) {
        case 'a':
            return true;
            break;
        
        case 'e':
            return true;
            break;
        
        case 'i':
            return true;
            break;
        
        case 'o':
            return true;
            break;
        
        case 'u':
            return true;
            break;
        
        default:
            return false;
    }
}

bool is_letter(char c) {
    return (c >= 65 && c <= 90) || (c >= 97 && c <= 122);
}

int find_first_vowel(std::string str) {
        for (int i = 0; i < str.length(); ++i) {
        char c = str[i];
        if (IsLetter(c) && IsVowel(c)) {
            return i;
        }
    }
    return -1;
}

std::vector<std::string> tokenize_from_index(std::string str, int idx) {
    std::vector<std::string> tokens;
    std::string first_token = str.substr(0, idx);
    std::string second_token = str.substr(idx);
    tokens.push_back(first_token);
    tokens.push_back(second_token);
    return tokens;
}

std::string english_to_piglatin(std::string str) {
    int idx = FindFirstVowel(str);
    if (idx == -1) return str;
    std::vector<std::string> tokens = TokenizeFromIndex(str, idx);
    std::string pig_latin = tokens[1].append(tokens[0].append("ay"));
    return pig_latin;
}

void english_to_piglatin_ref(std::string &str) {
    int idx = FindFirstVowel(str);
    if (idx == -1) return;
    std::vector<std::string> tokens = TokenizeFromIndex(str, idx);
    std::string pig_latin = tokens[1].append(tokens[0].append("ay"));
    str = pig_latin;
}