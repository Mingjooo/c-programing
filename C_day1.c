#include <stdio.h>

/*
int main(void)
{
	printf("사과\n");
	printf("오렌지\n");
	printf("포도\n");

	return 0;

}
*/
/*
int main(void)
{
	printf("이름: 지민주\n");
	printf("나이: 20살\n");
	printf("주소: 서울 노원구");
	return 0;
}
*/
/*
int main(void)
{
	printf("Hello\nC\nProgrammers!");
	
	return 0;
}
*/
/*
int main(void)
{
	printf("***************\n");
	printf("* Report *\n");
	printf("***************\n");
	printf("   --------\n");
	printf("  ㅣ전통과ㅣ\n");
	printf("   --------\n");
	printf("2022707075\n");
	printf("지민주");
	
	return 0;
}
*/
/*
int main(void)
{
	int x;
	int y;
	int sum;

	x = 100;
	y = 200;

	sum = x + y;
	
	printf("두 수의 합: %d", sum);

	return 0;
}
*/

int main(void)
{
	int x;
	int y;
	int sum;

	printf("첫번째 숫자를 입력하시오: ");
	scanf_s("%d", &x);

	printf("두번째 숫자를 입력하시오: ");
	scanf_s("%d", &y);

	sum = x + y;
	printf("두 수의 합: %d", sum);

	return 0;
}

