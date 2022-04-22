#include <stdio.h> 

int main(void)
{
	char str[255];
	int i;

	printf("Input: ");

	gets(str);

	for (i = 0; str[i] != 0; i++)
	{
		if (i == 0 && 'a' <= str[i] && str[i] <= 'z')
			str[i] -= 32;
		else if (str[i - 1] == ' ' && 'a' <= str[i] && str[i] <= 'z')
			str[i] -= 32;
	}

	printf("Output: %s", str);

	return 0;
}