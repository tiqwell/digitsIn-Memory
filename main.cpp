#include "Header.h"

int main()
{	
	long long digit;
	int a, b;
	std::cout << "enter a digit ";
	std::cin >> digit;
	std::cout << "enter a number of bit ";
	std::cin >> a;
	std::cout << "enter method ";
	std::cin >> b;
	std::cout << itc_bin_num(digit , a , b);
}