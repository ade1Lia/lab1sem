#include <iostream>
#include "func.hpp"

namespace func
{	
	//����� �� �������
	void read(int A[S][N])
	{

		for (int i = 0; i < S; i++)
		{
			for (int j = 0; j < N; j++)
			{
				std::cin >> A[i][j];
			}
		}
	}
	//������ � �������
	void print(int A[S][N])
	{
		for (int i = 0; i < S; i++)
		{
			for (int j = 0; j < N; j++)
			{
				std::cout << A[i][j];

				if (j != N - 1) std::cout << ' ';
			}
			std::cout << std::endl;
		}
	}
	//�������� �� ������� �����
	bool isPrime(int number)
	{
		if (number < 2)
		{
			return false;
		}
		for (int d = 2; d <= sqrt(number); d++)
		{
			if (number % d == 0)
				return false;
		}
		return true;
	}
	//����� ��������� ������
	int Sum(int A[S][N], int rowIndex)
	{
		int sum = 0;
		for (int i = 0; i < N; i++)
		{
			sum += A[rowIndex][i];
		}
		return sum;
	}
	//����� �������
	int Norm(int A[S][N], int columnIndex)
	{
		int norm = 0;

		for (int i = 0; i < S; i++)
		{
			norm += (int)pow((float)A[i][columnIndex], 2.f);
		}

		return sqrt(norm);
	}
	//�������, ������� ������ ������� �������� � ����������
	void swap(int& left, int& right)
	{
		int pomenyat = left;
		left = right;
		right = pomenyat;
	}
	//�������, ������� ������ ������� ������� �������
	void swapColums(int A[S][N], int firstColumnIndex, int secondColumnIndex)
	{
		for (int i = 0; i < S; i++)
		{
			swap(A[i][firstColumnIndex], A[i][secondColumnIndex]);
		}
	}
	//���������� �������� ������� �� ������������� �����
	void sort(int A[S][N])
	{
		for (int i = 0; i < N - 1; i++)
		{
			for (int j = i + 1; j < N; j++)
			{
				if (Norm(A, i) < Norm(A, j))
				{
					swapColums(A, i, j);
				}
			}
		}
	}
}