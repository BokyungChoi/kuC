#include <stdio.h>

int scanf_ex(void) {
	int num1, num2, num3;
	printf("�� ���� ���� �Է�: ");
	scanf_s("%d %o %x", &num1, &num2, &num3);

	printf("�Էµ� ���� 10���� ���: ");
	printf("%d %d %d \n", num1, num2, num3);
	return 0;
}


// ������ �ܵ� while
int gugudan_ex1(void) {
	
	int dan = 0, num = 1;
	printf("�� ���� ���ϼ���? ");
	scanf_s("%d", &dan);

	while (num < 10)
	{
		printf("%d x %d = %d \n ", dan, num, dan * num);
		num += 1;
	}
	return 0;

}


// while ��ø�Ͽ� ��ü ������ + scanf ����
int gugudan_ex2(void)
{
	int cur = 2, is = 0; // 2���� ���ϱ� �����Ѵ�, �ܿ� �������� ���� is ������ �����Ͽ� ������.
	printf("�� �ܺ��� �����ұ��? ");
	scanf_s("%d", &cur); // ���ϱ⸦ �����ϰ� ���� ���� �Է� �޴´�.

	
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
		printf("���� �Է�(0 to quit): ");
		scanf_s("%d", &num);
		total += num;

	} while (num != 1);
	
	printf("�հ�: %d \n", total);
	return 0;
}