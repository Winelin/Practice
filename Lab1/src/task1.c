#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

int main()
{
	double x, y;

	x = 2;
	y = (sin(PI / 2.0 + 3.0 * x)) / (1 - sin(3.0 * x - PI));
	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);

	printf("Enter X: "); scanf("%lf", &x);
	y = (sin(PI / 2.0 + 3.0 * x)) / (1 - sin(3.0 * x - PI));

	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);
	
	system("pause");
	return 0;
}
