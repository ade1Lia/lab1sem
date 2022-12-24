#include <iostream>

int main()
{
	long long int a;
	std::cout << "Input number\n";
	std::cin >> a;
	std::cout << std::endl;

	unsigned char* c = (unsigned char*)&a;								
	for (int i = 0; i < sizeof(a); i++) {
		printf("%d ", c[i]);
	}



	return 0;
}