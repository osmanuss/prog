#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Введите число" << endl;
    int n, x = 0;
    cin >> n;
    while (true)
    {
        if (pow(2, x) > n)
        {
            cout << x;
            break;
        }
        x++;
    }
}