#include <iostream>
#include "func.hpp"

int main()
{
	int A[S][N];
	func::read(A);
	func::print(A);


	for (size_t i = 0; i < S; i++)
	{
		for (size_t j = 0; j < N; j++)
		{
			if (func::isPrime(A[i][j]) && func::Sum(A, i) == 0)
			{
				func::sort(A);
				func::print(A);
				return 0;
			}
		}
	}
}