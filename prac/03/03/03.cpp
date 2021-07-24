#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");
    int a, b;
    double c, d;
    int answer4;
    double answer8;
    std::cout << "a + b =" << 2 << "\n";
    // int&int
    std::cout << "Шаг 1. Введите 2 числа типа int\na = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "a - b = " << a - b << std::endl;
    std::cout << "a * b = " << a * b << std::endl;
    std::cout << "a / b = " << a / b << std::endl;

    // int&double
    std::cout << "Шаг 2. Введите 1 число типа int, а второе - double\na = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> c;
    std::cout << "a + b = " << a + c << std::endl;
    std::cout << "a - b = " << a - c << std::endl;
    std::cout << "a * b = " << a * c << std::endl;
    std::cout << "a / b = " << a / c << std::endl;

    //double&int
    std::cout << "Шаг 3. Введите 1 число типа double. а второе - int\na = ";
    std::cin >> c;
    std::cout << "b = ";
    std::cin >> a;
    std::cout << "a + b = " << c + a << std::endl;
    std::cout << "a - b = " << c - a << std::endl;
    std::cout << "a * b = " << c * a << std::endl;
    std::cout << "a / b = " << c / a << std::endl;

    //double&double
    std::cout << "Шаг 4. Введите 2 числа типа double\na = ";
    std::cin >> c;
    std::cout << "b = ";
    std::cin >> d;
    std::cout << "a + b = " << c + d << std::endl;
    std::cout << "a - b = " << c - d << std::endl;
    std::cout << "a * b = " << c * d << std::endl;
    std::cout << "a / b = " << c / d << std::endl;
}