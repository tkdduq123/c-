//#include <stdio.h>
//
//void main()
//{
//	float a = 2.0f, b = 3.0f, c = 4.0f;
//	float result;
//
//	result = a + b + c;
//	printf("%5.2f+%5.2f=%5.2f\n", a, b, result);
//	result = a - b - c;
//	printf("%5.2f-%5.2f=%5.2f\n", a, b, result);
//	result = a * b * c;
//	printf("%5.2f * %5.2f = %5.2f\n",a, b, result);
//
//}
//#include <stdio.h>
//
//int main()
//{
//	char q='A'-1;
//	//scanf("%c", &q);
//	if (q >= 0x61&&q<='z')
//	{
//		printf("%c�� �ҹ��� �Դϴ�",q);
//	}
//	else if (q<=0x5a&&q>=0x41)
//	{
//		printf("%c�� �빮�� �Դϴ�.",q);
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int number, answer;
//	scanf("%d%d", &number, &answer);
//	if (number > answer) {
//		printf("����1�� ����2���� Ů�ϴ�.\n");
//	}
//	else/*number<=answer �� ��� else ����*/
//	{
//		if (number < answer)
//		{
//			printf("����2�� ����1���� Ů�ϴ�.\n");
//		}
//		else
//		{
//			printf("����1�� ����2�� �����ϴ�.\n");
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int number, answer;
//	scanf("%d%d", &number, &answer);
//	if (number > answer) {
//		printf("����1�� ����2���� Ů�ϴ�.\n");
//	}
//	else if(number < answer)
//	{
//		printf("����2�� ����1���� Ů�ϴ�.\n");
//	}
//	else
//	{
//		printf("����1�� ����2�� �����ϴ�.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int score = 75;
//	if (score > 90) {//91~100
//		printf("������ A����Դϴ�.\n");
//	}
//	else if (score > 80) {//81~90
//		printf("������ B����Դϴ�.\n");
//	}
//	else if (score > 70) {//71~80
//		printf("������ C����Դϴ�.\n");
//	}
//	else if (score > 60) {//61~70
//		printf("������ D����Դϴ�.\n");
//	}
//	else {//0~60
//		printf("������ F����Դϴ�.\n");
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
	int number = -11;
	if (number > 0) {
		printf("number�� ��� �Դϴ�.\n");
	}
	else if (number < 0) {
		printf("number�� �����Դϴ�.\n");
	}
	else {
		printf("number�� 0�Դϴ�.\n");
	}
	if (number % 2 == 0)
	{//2�� ���� �������� ¦���Դϴ�.\n
		printf("number�� ¦���Դϴ�.\n");
	}
	else
	{//2�γ��� �������� 1�̸� Ȧ��
		printf("number�� Ȧ���Դϴ�.\n");
	}
	return 0;
}