#include <iostream>
#include "shapes.h"

int main()
{
    std::cout << box(7, 4) << '\n';
    std::cout << checkerboard(11, 6) << '\n';
    std::cout << cross(8) << '\n';
    std::cout << lower_triangle(6) << '\n';
    std::cout << upper_triangle(5) << '\n';
    std::cout << upside_down_trapezoid(12, 5) << '\n';
    std::cout << upside_down_trapezoid(12, 7) << '\n';
    std::cout << checkerboard3x3(16, 11) << '\n';
    std::cout << checkerboard3x3(27, 27) << '\n';
    return 0;
}
