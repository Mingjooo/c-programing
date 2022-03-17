#include <stdio.h>

int main()
{
	int a = 3;
	int b = 1;
	int c;
	c = a + b;
	printf("%d + %d = %d\n", a, b, c);
	c = a - b;
	printf("%d - %d = %d\n", a, b, c);
	c = a * b;
	printf("%d * %d = %d\n", a, b, c);
	c = a / b;
	printf("%d / %d = %d\n", a, b, c);
	c = a % b;
	printf("%d %% %d = %d\n", a, b, c);

}