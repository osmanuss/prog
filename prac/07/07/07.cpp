#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");
    int x;
    double a, b, c, Ax, Ay, Bx, By, Cx, Cy, p;

    std::cout << "Выберите способ введения данных треугольника (1 - по сторонам, 2 - по вершинам)\n";
    std::cin >> x;

    if (x == 1)
    {
        std::cout << "Введите длины сторон треугольника\na = ";
        std::cin >> a;
        std::cout << "b = ";
        std::cin >> b;
        std::cout << "c = ";
        std::cin >> c;

        if ((a < 0) or (b < 0) or (c < 0)) 
        {
            std::cout << "Как так получилось, что у тебя длина стороны имеет отрицательное значение";
            return 0;
        }
        if ((a >= (b + c)) or (b >= (c + a)) or (c >= (a + b)))
        {
            std::cout << "Как так получилось, что у тебя 1 сторона по длине как две другие или даже больше? Таких треугольников не существует";
            return 0;
        }
    }
    else
        if (x == 2)
        {
            std::cout << "Введите координаты точек треугольника через пробел\nA = ";
            std::cin >> Ax >> Ay;
            std::cout << "B = ";
            std::cin >> Bx >> By;
            std::cout << "C = ";
            std::cin >> Cx >> Cy;

            if (((Ax == Bx) and (Ay == By)) or ((Ax == Cx) and (Ay == Cy)) or ((Bx == Cx) and (By == Cy)))
            {
                std::cout << "Как так получилось, что у тебя вершины находятся на одинаковых координатах?";
                return 0;
            }

            a = sqrt((Ax - Bx) * (Ax - Bx) + (Ay - By) * (Ay - By));
            b = sqrt((Bx - Cx) * (Bx - Cx) + (By - Cy) * (By - Cy));
            c = sqrt((Cx - Ax) * (Cx - Ax) + (Cy - Ay) * (Cy - Ay));
        }
        else
        {
            std::cout << "Или 1, или 2";
            return 0;
        }
    
    p = (a + b + c) / 2;
    std::cout << "\nS = " << sqrt(p * (p - a) * (p - b) * (p - c));
}