#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Введите число" << endl;
    int a;
    cin >> a;
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            cout << "Составное";
            return 0;
        }
    }
    cout << "Простое";
}