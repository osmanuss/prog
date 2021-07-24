#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");
    double x0, v0, t, a = 9.8, xt;
    std::cout << "Введите переменные \"x0 v0 t\" В следующей строке через пробел\n";
    std::cin >> x0 >> v0 >> t;
    std::cout << "xt = x0 + v0 * t - a * t * t / 2 = " << x0 + v0 * t - a * t * t / 2;
}