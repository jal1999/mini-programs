#ifndef SUM_HPP
#define SUM_HPP

#include <vector>

bool can_sum(std::vector<int> &vals, int target);

bool sum_helper(std::vector<int> &vals, int target, std::vector<int> &chosen);

#endif