#ifndef S4_SUBSEQUENCE_HPP
#define S4_SUBSEQUENCE_HPP

#include <string>

/**
 * Returns the longest common subsequence of the two arguments.
 *
 * @param first the first string
 * @param second the second string
 * @return the longest common subsequence
 */
int longest_subseq(std::string first, std::string second);

int subseq_helper(std::string first, std::string second, int longest=0);

#endif
