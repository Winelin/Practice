#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

double f(double x)
{
	return (sin(PI / 2.0 + 3.0 * x)) / (1 - sin(3.0 * x - PI));
}

int main()
{
	double x, y;

	printf("Enter X: "); scanf("%lf", &x);
	y = f(x);

	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);
	
	system("pause");
	return 0;
}
