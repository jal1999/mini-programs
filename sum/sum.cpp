#include "sum.hpp"
#include <iostream>

bool can_sum(std::vector<int> &vals, int target) {
    std::vector<int> vec;
    return sum_helper(vals, target, vec);
}

bool sum_helper(std::vector<int> &vals, int target, std::vector<int> &chosen) {
    if (target == 0) { // easy case
        return true;
    } else { // recursive case
        for (int i = 0; i < vals.size(); ++i) {
            int x = vals[i];
            chosen.push_back(vals[i]);
            vals.erase(vals.begin() + i);
            bool first = sum_helper(vals, target, chosen);
            vals.insert(vals.begin() + i, x);
            chosen.erase(vals.end() - 1);
            bool second = sum_helper(vals, target, chosen);
            return first || second;
        }
    }
}