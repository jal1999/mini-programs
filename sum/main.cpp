#include <iostream>
#include "sum.hpp"
#include <vector>

int main() {
    std::vector<int> x = {1, 2, 3, 4, 5};
    std::cout << can_sum(x, 7) << std::endl;
    return 0;
}