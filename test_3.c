#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() 
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	
	if (a < b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c) {
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c) {
		int tmp = b;
		b = c;
		c = tmp;
	}
	if (a < (b + c))
	{
		if ((b * b + c * c) > a * a) {
			printf("acute triangle\n");
		}
		if ((b * b + c * c) == a * a) {
			printf("right triangle\n");
		}
		if ((b * b + c * c) < a * a) {
			printf("obtuse triangle\n");
		}

	}
	if (a > (b + c))
		printf("illegal triangle\n");
	return 0;
}