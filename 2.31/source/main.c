#include <stdio.h>
int main()
{
	int a, b, c;
	printf("number   square   cube\n");
	for (a = 0; a <= 3; a++)
	{
		b = a * a;
		c = a * a*a;
		printf("%d        %d        %d\n", a, b, c);
	}
	for (a = 4; a <= 9; a++)
	{
		b = a * a;
		c = a * a * a;
		printf("%d        %d       %d\n", a, b, c);
	}
	{
		a = 10;
		b = a * a;
		c = a * a * a;
		printf("%d       %d      %d\n", a, b, c);
	}
	system("pause");
	return 0;
}