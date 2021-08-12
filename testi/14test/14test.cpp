#include <iostream>

using namespace std;

int main()
{
	//1
	int k = 10;
	while (--k)
	{
		if (k == 5) continue;
		cout << k;
	}
}