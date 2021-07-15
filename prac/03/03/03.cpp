#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");
    int a, b;
    double c, d;
    int answer4;
    double answer8;
    // int&int
    std::cout << "Шаг 1. Введите 2 числа типа int\na = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    answer4 = a + b;
    std::cout << "a + b = " << answer4 << std::endl;
    answer4 = a - b;
    std::cout << "a - b = " << answer4 << std::endl;
    answer4 = a * b;
    std::cout << "a * b = " << answer4 << std::endl;
    answer8 = a / b;
    std::cout << "a / b = " << answer8 << std::endl;
    // int&double
    std::cout << "Шаг 2. Введите 1 число типа int, а второе - double\na = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> c;
    answer8 = a + c;
    std::cout << "a + b = " << answer8 << std::endl;
    answer8 = a - c;
    std::cout << "a - b = " << answer8 << std::endl;
    answer8 = a * c;
    std::cout << "a * b = " << answer8 << std::endl;
    answer8 = a / c;
    std::cout << "a / b = " << answer8 << std::endl;
    //double&int
    std::cout << "Шаг 3. Введите 1 число типа double. а второе - int\na = ";
    std::cin >> c;
    std::cout << "b = ";
    std::cin >> a;
    answer8 = c + a;
    std::cout << "a + b = " << answer8 << std::endl;
    answer8 = c - a;
    std::cout << "a - b = " << answer8 << std::endl;
    answer8 = c * a;
    std::cout << "a * b = " << answer8 << std::endl;
    answer8 = c / a;
    std::cout << "a / b = " << answer8 << std::endl;
    //double&double
    std::cout << "Шаг 4. Введите 2 числа типа double\na = ";
    std::cin >> c;
    std::cout << "b = ";
    std::cin >> d;
    answer8 = c + d;
    std::cout << "a + b = " << answer8 << std::endl;
    answer8 = c - d;
    std::cout << "a - b = " << answer8 << std::endl;
    answer8 = c * d;
    std::cout << "a * b = " << answer8 << std::endl;
    answer8 = c / d;
    std::cout << "a / b = " << answer8 << std::endl;
}