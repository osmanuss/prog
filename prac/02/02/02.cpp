#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");
    int a, b;
    a = 3;
    b = 3.14;
    std::cout << "a = " << a << "; " << "b = " << b << std::endl;
    double c, d;
    c = 3;
    d = 3.14;
    std::cout << "c = " << c << "; " << "d = " << d << std::endl;
}