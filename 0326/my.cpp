#include <stdio.h>


class Saram
{
	int iX;  //â��
	int iY;  //��
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
	int Add() //����
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
	
	printf("�� ���� ���� ���� ���: %d\n", iResult);
}
