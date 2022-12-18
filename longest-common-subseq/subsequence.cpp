#include "subsequence.hpp"

#include <utility>

int longest_subseq(std::string first, std::string second) {
    return subseq_helper(std::move(first), std::move(second));
}

int subseq_helper(std::string first, std::string second, int longest) {
    if (first.empty() || second.empty()) {
        return longest;
    } else if (first[0] == second[0]) {
        return subseq_helper(first.substr(1), second.substr(1), 1);
    } else {
        return std::max(subseq_helper(first.substr(1), second, 0), subseq_helper(first, second.substr(1), 0));
    }
}