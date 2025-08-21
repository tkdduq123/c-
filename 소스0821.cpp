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
//		printf("%c는 소문자 입니다",q);
//	}
//	else if (q<=0x5a&&q>=0x41)
//	{
//		printf("%c는 대문자 입니다.",q);
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
//		printf("숫자1이 숫자2보다 큽니다.\n");
//	}
//	else/*number<=answer 인 경우 else 실행*/
//	{
//		if (number < answer)
//		{
//			printf("숫자2가 숫자1보다 큽니다.\n");
//		}
//		else
//		{
//			printf("숫자1과 숫자2가 같습니다.\n");
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
//		printf("숫자1이 숫자2보다 큽니다.\n");
//	}
//	else if(number < answer)
//	{
//		printf("숫자2가 숫자1보다 큽니다.\n");
//	}
//	else
//	{
//		printf("숫자1과 숫자2가 같습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int score = 75;
//	if (score > 90) {//91~100
//		printf("성적은 A등급입니다.\n");
//	}
//	else if (score > 80) {//81~90
//		printf("성적은 B등급입니다.\n");
//	}
//	else if (score > 70) {//71~80
//		printf("성적은 C등급입니다.\n");
//	}
//	else if (score > 60) {//61~70
//		printf("성적은 D등급입니다.\n");
//	}
//	else {//0~60
//		printf("성적은 F등급입니다.\n");
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
	int number = -11;
	if (number > 0) {
		printf("number은 양수 입니다.\n");
	}
	else if (number < 0) {
		printf("number은 음수입니다.\n");
	}
	else {
		printf("number은 0입니다.\n");
	}
	if (number % 2 == 0)
	{//2로 나눈 나머지가 짝수입니다.\n
		printf("number은 짝수입니다.\n");
	}
	else
	{//2로나눈 나머지가 1이면 홀수
		printf("number은 홀수입니다.\n");
	}
	return 0;
}