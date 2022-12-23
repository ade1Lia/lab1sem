#pragma once

#define S 3
#define N 3

namespace func
{
	//������� ������ �� �������
	void read(int A[S][N]);

	//������� ������ � �������
	void print(int A[S][N]);

	//�������, ������� ��������� �������� �� ����� �������
	bool isPrime(int number);

	//�������, ������� ���������� ����� ��������� ������
	int Sum(int A[S][N], int rowIndex);

	//�������, ������� ���������� ����� �������
	int Norm(int A[S][N], int columnIndex);

	//�������, ������� ������ ������� �������� � ����������
	void swap(int& left, int& right);

	//�������, ������� ������ ������� ������� �������
	void swapColums(int A[S][N], int firstColumnIndex, int secondColumnIndex);

	//�������, ����������� ������� ������� �� ������������� �����
	void sort(int A[S][N]);
}
