#include <iostream>

int main()
{
    double a, b;
    char x;
    setlocale(LC_ALL, "rus");
    std::cout << "Вводите свой пример\n";
    std::cin >> a >> x >> b;
    std::cout << a << " " << x << " " << b << " = ";
    if (x == '+')
    {
        std::cout << a + b;
        return 0;
    }
    if (x == '-')
    {
        std::cout << a - b;
        return 0;
    }
    if (x == '*')
    {
        std::cout << a * b;
        return 0;
    }
    if (x == '/')
    {
        std::cout << a / b;
        return 0;
    }
    std::cout << "Мы не можем такое решить, если это пример вообще";
}