#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j, num, index, change;
	int grade[10] = { 11,5,0,2,1,8,3,9,20,12 };
	for (int i = 0; i < 10; i++)
	{
		num = 9999;
		for (j = i; j < 10; j++)
		{
			if (num > grade[j])
			{
				num = grade[j];
				index = j;
			}
		}
		change = grade[i];
		grade[i] = grade[index];
		grade[index] = change;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d", grade[i]);
	}
	printf("\n");


	int k;
	int find;
	for (k = 0; k < ((sizeof(grade)) / 4); k++)
	{
		printf("%4d", grade[k]);
	}
	printf("\n찾고 싶은 수를 입력하시오 :");
	scanf("%d", &find);
	for (k = 0; k < ((sizeof(grade)) / 4); k++)
	{
		if (grade[k] == find) { printf("%d는 %p에 있습니다.\n", find, &find); break; }
	}
	if (k == (sizeof(grade)) / 4) { printf("%d는 배열에 존재하지 않습니다.\n", find); }
}