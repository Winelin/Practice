#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

double x, result;

void f(void) 
{
	result = pow((sin(PI / 2.0 + 3.0 * x)) / (1 - sin(3.0 * x - PI)), /*pow*/2.0) - pow((sin(PI / 2.0 + 3.0 * x)) / (1 - sin(3.0 * x - PI)), /*pow*/2.0);
}

int main()
{
	printf("Enter X: "); scanf("%lf", &x);
	f();

	printf("x = %.4f\n", x);
	printf("result = %.4f\n", result);
	
	system("pause");
	return 0;
}
