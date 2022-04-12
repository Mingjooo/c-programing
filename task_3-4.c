#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/* 문제 1
int main(void)
{
	int x;
	int y;
	char name[30] = "minju";

	y = strlen(name);

	for (x = 0; x < y; x++)
	{
		printf("%c\n", name[x]);
	}

	for (x = y - 1; x >= 0; x--)
	{
		printf("%c", name[x]);
	}
}
*/

/* 문제 2
int main(void)
{
	int a;
	scanf_s("%d", &a);
	if ((a % 2) || (a % 4))
	{
		printf("나누어지지 않음");
	}
	else
	{
		printf("나누어짐");
	}
}
*/

/* 문제 3
int main(void)
{
	int x = 0;
	while (x <= 100)
	{
		if (x % 2 == 1)
		printf("%d ", x);
		x++;
	}
}
*/

/* 문제 4
int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	if ((a > b) && (a > c)) {
		printf("%d\n", a);
	}
	else if ((b > a) && (b > c)) {
		printf("%d\n", b);
	}
	else {
		printf("%d\n", c);
	}
	return 0;
}
*/