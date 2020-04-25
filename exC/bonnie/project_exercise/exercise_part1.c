#include <stdio.h>

int scanf_ex(void) {
	int num1, num2, num3;
	printf("세 개의 정수 입력: ");
	scanf_s("%d %o %x", &num1, &num2, &num3);

	printf("입력된 정수 10진수 출력: ");
	printf("%d %d %d \n", num1, num2, num3);
	return 0;
}


// 구구단 단독 while
int gugudan_ex1(void) {
	
	int dan = 0, num = 1;
	printf("몇 단을 원하세요? ");
	scanf_s("%d", &dan);

	while (num < 10)
	{
		printf("%d x %d = %d \n ", dan, num, dan * num);
		num += 1;
	}
	return 0;

}


// while 중첩하여 전체 구구단 + scanf 응용
int gugudan_ex2(void)
{
	int cur = 2, is = 0; // 2부터 곱하기 시작한다, 단에 곱해지는 수를 is 변수에 저장하여 돌린다.
	printf("몇 단부터 시작할까요? ");
	scanf_s("%d", &cur); // 곱하기를 시작하고 싶은 단을 입력 받는다.

	
	while (cur < 10)
	{
		is = 1;
		while (is < 10)
		{
			printf("%d x %d = %d \n", cur, is, cur * is);
			is += 1;
		}
		cur += 1;
	}
	return 0;
}

int dowhile(void) {

	int total = 0, num = 0;

	do
	{
		printf("정수 입력(0 to quit): ");
		scanf_s("%d", &num);
		total += num;

	} while (num != 1);
	
	printf("합계: %d \n", total);
	return 0;
}