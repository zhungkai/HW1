#include <stdio.h>
int main()
{
	int a; 
	scanf_s("%d",&a); 
	if (a % 2 == 1)
		printf("a is odd");
	else if (a % 2 == 0)
		printf("a is even");
	system("pause");
}