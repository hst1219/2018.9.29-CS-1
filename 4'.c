#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#pragma warning(disable:4996)

int main()
{
	float a, b, c;
	double d, e, f, angle1, angle2, angle3;

	printf("是否為直角三角形?\n請輸入三角形之三邊長:\n");
	scanf("%f\n", &a);
	scanf("%f\n", &b);
	scanf("%f", &c);

		if (a < 0 || b < 0 || c < 0)
		
			printf("邊長不可為負\n");
			
		else if (a + b <= c || b + c <= a || c + a <= b)
		
			printf("兩邊之和要大於第三邊!\n");
			
		else
		{
			d = (b*b + c * c - a * a) / (2 * b*c);
			e = (a*a + c * c - b * b) / (2 * a*c);
			f = (a*a + b * b - c * c) / (2 * a*b);

			angle1 = acos(d) * 180 / 3.1415926535897932384626433832795028841971;
			angle2 = acos(e) * 180 / 3.1415926535897932384626433832795028841971;
			angle3 = acos(f) * 180 / 3.1415926535897932384626433832795028841971;

			
			if (angle1 == 90 || angle2 == 90 || angle3 == 90)
				printf("Yes,三角形為直角三角形.\n");

			else if (angle1 > 90 || angle2 > 90 || angle3 > 90)
				printf("No,三角形為鈍角三角形.\n");

			else if (angle1 < 90 || angle2 < 90 || angle3 < 90)
				printf("No,三角形為銳角三角形.\n");
			printf("---------------------------------------------------------------------------------\n");
		}
		

	system("pause");
	return 0;
}