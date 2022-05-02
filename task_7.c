/* 문제 1
#include <stdio.h>

int main()
{
	int i;
	int A = 0;
	int B = 0;
	int C = 0;
	int F = 0;

	do
	{
		printf(" ");
		scanf_s("%d", &i);
		
		if (i < 0 || i > 100)
		{
			break;
		}

		else if (i >= 80 && i <= 100)
		{
			A++;
		}
		else if (i >= 60 && i <= 79)
		{
			B++;
		}
		else if (i >= 40 && i <= 59)
		{
			C++;
		}
		else if (i >= 0 && i <= 39)
		{
			F++;
		}
	} while (i < 100);

	printf("You have %d 'A', %d 'B', %d 'C', and %d 'F'", A, B, C, F);

}
*/

/*문제 2
#include <stdio.h>
int main()
{
	int a, b, c;
	printf("1. 'R': Rainy\n2. 'H': Hot\n3. 'C': Cold\n");

	printf("오늘의 날씨를 입력하세요: ");
	scanf_s("%d", &a);

	switch (a)
	{
	case 1:
		printf("우산을 잊지 말고 챙기세요.\n");
		break;
	case 2:
		printf("물을 많이 마시세요.\n");
		break;
	case 3:
		printf("옷을 따듯하게 입으세요.\n");
		break;
	}
}
*/