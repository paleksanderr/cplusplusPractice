#include "io.h"
#include <iostream>

int readNumber()
{
    std::cout << " Please type a number :" << '\n';
    int x{};
    std::cin >> x;

    return x;
}
void writeAnswer(int a, int b)
{
    std::cout << "The addition of this 2 numbers = " << a + b << '\n';
}