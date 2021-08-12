#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    short a, b, n, m;
    while (1)
    {
        cout << "Играем в игру \"Угадай число\". Введите число от 1 до 100:" << endl;
        srand(time(0));
        a = rand();
        a = a % 101;

        for (n = 0; n < 5; n++)
        {
            cin >> b;

            if ((b > a) && (n < 4))
                cout << "Загаданное число меньше" << endl;
            else if (b < a && (n < 4))
                cout << "Загаданное число больше" << endl;
            else
                break;
        }

        if (b != a)
            cout << "Вы проиграли. Было загадано: " << a << endl;
        else
            cout << "Поздравляю! Вы угадали" << endl;

        cout << "Хотите начать сначала ? (1 - ДА)" << endl;
        cin >> m;
        if (m != 1)
            break;
    }
}