/* ���� 1
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

/*���� 2
#include <stdio.h>
int main()
{
	int a, b, c;
	printf("1. 'R': Rainy\n2. 'H': Hot\n3. 'C': Cold\n");

	printf("������ ������ �Է��ϼ���: ");
	scanf_s("%d", &a);

	switch (a)
	{
	case 1:
		printf("����� ���� ���� ì�⼼��.\n");
		break;
	case 2:
		printf("���� ���� ���ü���.\n");
		break;
	case 3:
		printf("���� �����ϰ� ��������.\n");
		break;
	}
}
*/