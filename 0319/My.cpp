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
	// 지역변수
	// int iX;
	// int iY;
	Assign(2, 3);

	iResult = Add();

	printf("hello\n");
	printf("hello\n");
	printf("hello\n");
	printf("hello\n");
	printf("두 개의 값을 더한 결과: %d\n", iResult);

}