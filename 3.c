#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int main()
{
	int num, a, b, c, d, e, odd, even;
	printf("請輸入數字(至多五位數) : ");
	scanf("%d", &num);

	a = num / 10000;
	b = (num - a * 10000) / 1000;
	c = (num - a * 10000 - b * 1000) / 100;
	d = (num - a * 10000 - b * 1000 - c * 100)/10;
	e = num - a * 10000 - b * 1000 - c * 100 - d * 10;

	if (a > 0)
	{
		odd = (a % 2) + (b % 2) + (c % 2) + (d % 2) + (e % 2);
		even = 5 - odd;
		printf("有%d個odd , %d個even.\n", odd, even);
   }

	else if (a ==0&&b>0)
	{
		odd =  (b % 2) + (c % 2) + (d % 2) + (e % 2);
		even = 4- odd;
		printf("有%d個odd , %d個even.\n", odd, even);
	}

	else if (a == 0&&b==0&&c>0)
	{
		odd =  (c % 2) + (d % 2) + (e % 2);
		even = 3 - odd;
		printf("有%d個odd , %d個even.\n", odd, even);
	}
	else if (a == 0 && b == 0 && c == 0&&d>0)
	{
		odd =  (d % 2) + (e % 2);
		even = 2- odd;
		printf("有%d個odd , %d個even.\n", odd, even);
	}


	else if (a == 0 && b == 0 && c == 0 && d > 0)
	{
		odd = (e % 2);
		even =1- odd;
		printf("有%d個odd , %d個even.\n", odd, even);
	}

	system("pause");
	return 0;

}