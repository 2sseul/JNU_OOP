#include <stdio.h>

int iX;
int iY;

void Assign(int x, int y) {
	iX = x;
	iY = y;
}

int Add() {
	return iX + iY;
}

void main()
{
	int iResult;
	// ��������
	// int iX;
	// int iY;
	Assign(2, 3);

	iResult = Add();

	printf("hello\n");
	printf("hello\n");
	printf("hello\n");
	printf("hello\n");
	printf("�� ���� ���� ���� ���: %d\n", iResult);

}