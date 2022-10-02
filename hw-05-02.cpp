#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#define _USE_MATH_DEFINES

int main() {
    double x = 1;
    double s = 0;
    double f = 0;
    double a = 0, b = 1;
    double delta = 0.05;
    double epsilon = 0.001;
    double y = 0;
    double p = 1;
    int i = 0;
    std::cout.flags(std::ios::left);
    std::cout << '|' << std::setw(10) << 'x' << '|' << std::setw(10) << "s(x)" << '|' << std::setw(10) << "f(x)" << '|'
              << '\n';
    for (i = 0, a; a <= b && (p == 0 || std::abs(p) > epsilon); a += delta, i += 1) {
        x = a;
        p = std::pow(x, i) * std::sin(i * M_PI / 4);
        s += p;
        f = (x * std::sin(M_PI / 4)) / (1 - 2 * x * std::cos(M_PI / 4));
        std::cout << '|' << std::setw(10) << x << '|' << std::setw(10) << s << '|' << std::setw(10) << f << '|' << '\n';
    }
}