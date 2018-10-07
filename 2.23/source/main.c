#include <stdio.h>
int main()
{
	int a, b, c, max, min;
	scanf_s("%d%d%d", &a, &b, &c);
	max = a;
	min = a;
	if (b > a) {
		max = b;
	}
	if (c > a) {
		max = c;
	}
	if (b < a) {
		min = b;
	}
	if (c < a) {
		min = c;
	}
	printf("%d is the largest", max);
	printf("\n");
	printf("%d is the smallest", min);
	printf("\n");
	system("pause");

}