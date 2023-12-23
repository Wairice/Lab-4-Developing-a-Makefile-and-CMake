#include <iostream>
#include "calculator.h"

int main() {
    Calculator calculator;
    double a = 8.0, b = 6.0;

    std::cout << "Addition: " << calculator.Add(a, b) << std::endl;
    std::cout << "Subtraction: " << calculator.Sub(a, b) << std::endl;

    return 0;
}
