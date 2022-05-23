#include <stdio.h>
#include <string.h>
int main()
{
	char name[3][100];
	char pressedName[3][3];

	printf("a. Input a name\n");

	for (int i = 0; i < 3; i++)
	{
		gets(name[i]);
	}

	for (int i = 0; i < 3; i++)
	{
		pressedName[i][0] = name[i][0];
		pressedName[i][1] = name[i][strlen(name[i]) - 1];
		pressedName[i][2] = 0;
	}

	printf("b. %s %s %s\n", pressedName[0], pressedName[1]), pressedName[2];

	printf("c. Which name you want to print? Select 1 or 2 or 3\n");

	int number;
	scanf_s("%d", &number);
	printf("%s\n", name[number - 1]);
}