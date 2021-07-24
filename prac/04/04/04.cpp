#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");
    int a, b, c;
    std::cout << "Введите 2 числа\na = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    c = a;
    a = b;
    b = c;
    std::cout << "Произошла замена чисел\na = " << a << std::endl << "b = " << b << std::endl;
    a = b + a;
    b = a - b;
    a = a - b;
    std::cout << "Произошла вторая замена чисел\na = " << a << std::endl << "b = " << b;
}