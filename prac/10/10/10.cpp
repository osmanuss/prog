#include <iostream>

using std::cout;

int main()
{
    setlocale(LC_ALL, "rus");
    long long s, l1, l2, r1, r2;
    cout << "Введите все данные для задания" << std::endl;
    std::cin >> s >> l1 >> r1 >> l2 >> r2;

    if (((l1 + l2) <= s) && ((r1 + r2) >= s))
    {
        if (l1 + r2 == s)
            cout << l1 << ' ' << r2;
        else if (l1 + r2 < s)
            cout << s - r2 << r2;
        else
            cout << l1 << s - l1;
    }
    else
        cout << -1;
}