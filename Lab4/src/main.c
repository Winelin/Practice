#include "stdio.h"
#include "math.h"

#define PI 3.14159265359


void f(double* x, double* result)
{
	*result = (sin(PI / 2.0 + 3.0 * (*x))) / (1 - sin(3.0 * (*x) - PI));
}

void writeArray(int* arr, int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void readArray(int* arr, int n)
{
	int i;
	for (i = 0; i < n; i++)
		scanf_s("%d", arr + i);
}

void sort(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (*(arr + j) > *(arr + j + 1))
			{
				int tmp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = tmp;
			}
		}
	}
}

int main()
{
	int size = 6;
	int arr[6];
	printf("array size: ");
	printf("%d\n", size);
	readArray(&arr, size);
	sort(&arr, size);
	writeArray(&arr, size);
	_getch();
	return 0;
}
