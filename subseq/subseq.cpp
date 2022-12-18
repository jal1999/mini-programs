#include "subseq.hpp"

bool is_subseq(std::string big, std::string small) {
    if (small.length() == 0) return true;
    else if (big.length() == 0 && small.length() != 0) return false;
    else if (big[0] == small[0]) return is_subseq(big.substr(1), small.substr(1));
    else return is_subseq(big.substr(1), small);
}