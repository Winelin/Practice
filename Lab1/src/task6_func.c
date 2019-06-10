#include <math.h>

#define PI 3.14159265359

double x, y;

void f(void) 
{
	y = (sin(PI / 2.0 + 3.0 * x)) / (1 - sin(3.0 * x - PI));
}