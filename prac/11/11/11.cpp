#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Вводите свои данные через строку\na = ";
    double a, x = 1;
    int b;
    cin >> a;
    cout << "b = ";
    cin >> b;
    if (b == 0)
        cout << 1;
    else
    {
        for (int i = 0; i < abs(b); i++)
            x = x * a;
        if (b > 1)
        {
            cout<< x;
        }
        else
        {
            cout << "1/" << x;
        }
    }
}