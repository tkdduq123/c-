#define _CRT_SWARNINGS
#include <stdio.h>
void main()
{
	int a, b;
	int result;
	char k;

	printf("ù ���� ����� ��==>");
	scanf("%d", &a);
	printf("+-*/%==>");
	scanf("%c", &k);
	printf("�� ��° ����Ұ�==>");
	scanf("%d", &b);

	if (k == '+') {
		result = a + b;
		printf("%d+%d=%d\n", a, b, result);

	}
	if (k == '-') {
		result = a - b;
		printf("%d-%d=%d\n", a, b, result);

	}
	if (k == '*') {
		result = a * b;
		printf("%d*%d=%d\n", a, b, result);
	}
	if (k == '/') {
		if (b != 0) {
			result = a / b;
			printf("%d/%d=%d\n", a, b, result);
		}else
			printf("0���� ������ �ȵ˴ϴ�.\n");
	}
	if (k == '%') {
		if (b != 0) {
			result = a % b;
			printf("%d%%%d=%d\n", a, b, result);
		}
		else
			printf("0���� ������ ���������� �ȵ˴ϴ�\n");
	}
}