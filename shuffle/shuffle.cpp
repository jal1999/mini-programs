#include "shuffle.hpp"
#include <cstdlib>
#include <iostream>

std::string shuffle(std::string input) {
    return shuffle_helper(input);
}

std::string shuffle_helper(std::string input, std::string chosen) {
    if (input.empty()) {
        return chosen;
    } else {
        srand(time(NULL));
        int random = rand() % (input.length());
        char c = input[random];
        chosen.insert(0, 1, c);
        input.erase(random, 1);
        return shuffle_helper(input, chosen);
    }
}