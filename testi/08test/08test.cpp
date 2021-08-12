#include <iostream>

int main()
{
	//1
	//if (-5) std::cout << 1;
	//else std::cout << 0;
	//if (5) std::cout << 1;
	//else std::cout << 0;
	//if (0) std::cout << 1;
	//else std::cout << 0;
	//if (0.0) std::cout << 1;
	//else std::cout << 0;
	//if (-5.0) std::cout << 1;
	//else std::cout << 0;
	//if (5.0) std::cout << 1;
	//else std::cout << 0;

	//2
	//int a = 5;
	//int b = 10;
	//switch (b - a)
	//{
	//	case  5: std::cout << "&"; break;
	//	case 10: std::cout << "*"; break;
	//	case 15: std::cout << "!"; break;
	//	default: std::cout << "-";
	//}

	//3
	//switch(1 - 1)
	//{ }

	//4
	//int a = 5;
	//int b = 10;
	//switch (b - a)
	//{
	//	case  5: std::cout << "0";
	//	case 10: std::cout << "1"; break;
	//	case 15: std::cout << "2";
	//	default: std::cout << "3";
	//}

	//5
	int a = 5;
	int b = 15;
	switch (b - a)
	{
	case  5: std::cout << "*";
	case 10:
	case 15:
	default: std::cout << "-";
	}
}