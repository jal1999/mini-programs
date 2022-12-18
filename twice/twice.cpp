/**
 * This file is to be used as a testing file for the functions pertaining to
 * the Twice portion of the assignment.
 * 
 * @author James LaFarr
 * @version 12.13.22
 */

 #include <vector>
#include <set>
#include <map>

std::vector<int> twice(std::vector<int> first) {
    std::map<int, int> m;
    std::vector<int> ret;
    for (int i : first) {
        m[i] = m.count(i) == 0 ? 1 : m[i] + 1;
    }
    for (std::pair<int, int> p : m) {
        if (p.second == 2) {
            ret.push_back(p.first);
        }
    }
    return ret;
}