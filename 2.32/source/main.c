#include <stdio.h>
int main()
{
	 float a, b, BMI;
	printf("�Х���J����m,�A��J�魫kg\n");
	scanf_s("%f%f",&a,&b);
	BMI = b / a / a;
	printf("BMI=%f\n", BMI);
	if (BMI < 18.5)
	{
		printf("Underweight\n");
	}
	if (BMI>=18.5 && BMI<= 24.9)
	{
		printf("Normal\n");
	}
	if (BMI>=25 && BMI< 29.9)
	{
		printf("Overweight\n");
	}
	if (BMI >= 30)
	{
		printf("Obese");
	}
	system("pause");
	return 0;
}