#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");
    int a = 3, b = 3.14;
    double c = 3, d = 3.14;
    std::cout << "a = " << a << std::endl << "b = " << b << std::endl << "c = " << c << std::endl << "d = " << d;
}