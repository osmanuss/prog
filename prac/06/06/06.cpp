#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");
    double a, b, c, x1, x2, d;
    std::cout << "Введите переменные\na = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    std::cout << "c = ";
    std::cin >> c;
    std::cout << a << "*x^2 + " << b << "*x + " << c << " = 0\n";
    if (a == 0)
        if (b == 0)
            if (c == 0)
                std::cout << "x - любое число";
            else
                std::cout << "Уравнение не имеет корней";
        else
            std::cout << "\nx = " << -(c / b);
    else
    {
        double d;
        d = sqrt(b * b - 4 * a * c);
        if (d > 0)
            std::cout << "x1 = " << (-b + d) / (2 * a) << "\nx2 = " << (-b - d) / (2 * a);
        else
            if (d == 0)
                std::cout << "x = " << (-b) / (2 * a);
            else
                std::cout << "Уравнение не имеет корней";
    }
}