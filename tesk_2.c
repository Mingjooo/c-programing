#include <stdio.h>
int main(void)
{
	float x;
	float y;
	float result;

	x = 1.5;
	y = 0.5;

	result = x * y;
	printf("Multiplication of  two number : %g\n", result);
	result = x / y;
	printf("Division of  two number: %g\n", result);
	result = x - y;
	printf("Subtraction of  two number: %g\n", result);
	result = x + y;
	printf("Addition of  two number: %g", result);

	return 0;
}