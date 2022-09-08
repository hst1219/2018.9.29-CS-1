#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int main()
{
	int i;
	int n;
	int totle = 0;

	printf("f(n)= 1*1 + 2*2 + 3*3 + ...... + n*n (n為正整數且n<100) \n\n請輸入n值:");
	scanf("%d", &n);

	for (i = 1, totle = 0; i <= n; i++)
		totle += i * i;

	printf("Ans : %d\n", totle);

	system("pause");
	return 0;
}

