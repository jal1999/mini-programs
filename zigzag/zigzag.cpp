#include "zigzag.hpp"

std::string zigzag(int n) {
    if (n == 1) return "*";
    else if (n == 2) return "**";
    else return "<" + zigzag(n - 2) + ">";
}