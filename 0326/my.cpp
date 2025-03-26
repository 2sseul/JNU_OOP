#include <stdio.h>


class Saram
{
	int iX;  //창자
	int iY;  //간 
	int iAge;

public:
	void Assign(int a, int b)
	{
		if (a < 0 || b < 0)
			return;

		iX = a;
		iY = b;
		iAge = 23;
	}
	int Add() //심장
	{
		Assign(2, 3);
		return iX + iY;
	}
};

Saram gildong, youngja, cheolsu;

void main()
{
	gildong.Assign(3, 5);

	int iResult = gildong.Add();
	
	printf("두 개의 값을 더한 결과: %d\n", iResult);
}
