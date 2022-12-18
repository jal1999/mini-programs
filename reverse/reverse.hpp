#ifndef REVERSE_HPP
#define REVERSE_HPP

#include <map>

template <typename T, typename U>
std::map<T, U> reverse_map(std::map<T, U> &forward) { // by ref to save mem
    std::map<T, U> reversed;
    for (auto it = forward.begin(); it != forward.end(); ++it) {
        T key = *it.first;
        U val = *it.second;
        reversed[val] = key;
    }
    return reversed;
}

#endif
