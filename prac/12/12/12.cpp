#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int a, x = 1;
    cout << "Введите число\n";
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        x = x * i;
    }
    cout << x;
}