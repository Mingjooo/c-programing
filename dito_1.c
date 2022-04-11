#include <stdio.h>
/*
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
*/
/*
int main()
{
	int numA = 9;
	int numB = 2;
	printf("%d %d\n", numA, numB);
	printf("%d %d\n", ++numA, ++numB);
	printf("%d %d\n", numA / numB, numA % numB);
	printf("%d", (numA / numB) == (numA % numB));

}
*/
/*
int main()
{
	int numA;
	int numB;
	printf("numA를 입력하세요: ");
	scanf_s("%d", &numA);
	printf("numB를 입력하세요: ");
	scanf_s("%d", &numB);
}
*/

int main(void)
{
	int x;
	int y;
	printf("정수 두 개를 입력하세요: ");
	scanf_s("%d %d", &x, &y);
	printf("%d + %d = %d\n", x, y, x + y);
	printf("%d - %d = %d\n", x, y, x - y);
	printf("%d * %d = %d\n", x, y, x * y);
	printf("%d / %d = %d\n", x, y, x / y);
	printf("%d %% %d = %d", x, y, x % y);

}
