#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#pragma warning(disable:4996)

int main()
{
	float a, b, c;
	double d, e, f, angle1, angle2, angle3;

	printf("�O�_�������T����?\n�п�J�T���Τ��T���:\n");
	scanf("%f\n", &a);
	scanf("%f\n", &b);
	scanf("%f", &c);

		if (a < 0 || b < 0 || c < 0)
		
			printf("������i���t\n");
			
		else if (a + b <= c || b + c <= a || c + a <= b)
		
			printf("���䤧�M�n�j��ĤT��!\n");
			
		else
		{
			d = (b*b + c * c - a * a) / (2 * b*c);
			e = (a*a + c * c - b * b) / (2 * a*c);
			f = (a*a + b * b - c * c) / (2 * a*b);

			angle1 = acos(d) * 180 / 3.1415926535897932384626433832795028841971;
			angle2 = acos(e) * 180 / 3.1415926535897932384626433832795028841971;
			angle3 = acos(f) * 180 / 3.1415926535897932384626433832795028841971;

			
			if (angle1 == 90 || angle2 == 90 || angle3 == 90)
				printf("Yes,�T���ά������T����.\n");

			else if (angle1 > 90 || angle2 > 90 || angle3 > 90)
				printf("No,�T���ά��w���T����.\n");

			else if (angle1 < 90 || angle2 < 90 || angle3 < 90)
				printf("No,�T���ά��U���T����.\n");
			printf("---------------------------------------------------------------------------------\n");
		}
		

	system("pause");
	return 0;
}