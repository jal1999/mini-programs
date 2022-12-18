#include <cmath>
#include <iostream>
#include <stdexcept>
#include "sumsq.hpp"

int sumsq(int n) {
	if (n < 0) throw std::invalid_argument("Argument n must be larger than 0");
	else if (n == 1) {
		return 1;
	} else {
		return (int) pow(n, 2) + sumsq(n - 1);
	}
}
