#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    setlocale(LC_ALL, "rus");
    int h1, m1, h2, m2, t1, t2;
    char s;

    cout << "Вводите время прихода человек. Через строку для каждого" << endl;
    cin >> h1 >> s >> m1;

    if ((h1 < 0) or (h1 > 23) or (s != ':') or (m1 < 0) or (m1 > 59))
    {
        cout << "Вы ввели неправильный формат ввода времени";
        return 0;
    }

    cin >> h2 >> s >> m2;
    if ((h2 < 0) or (h2 > 23) or (s != ':') or (m2 < 0) or (m2 > 59))
    {
        cout << "Вы ввели неправильный формат ввода времени";
        return 0;
    }

    if (abs(h1 * 60 + m1 - h2 * 60 - m2) <= 15)
        cout << "Встреча состоится";
    else
        cout << "Встреча не состоится";
}