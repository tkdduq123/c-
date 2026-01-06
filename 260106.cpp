//#include <stdio.h>
//
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("키가 150 이상입니다.\n");
//	}
//	if (height > 160)
//	{
//		 printf("키가 160 이상입니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("키가 150이상입니다.\n");
//	}
//	else if (height > 160)
//	{
//		printf("키가 160이상입니다.\n");
//}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int y_age;
//	printf("나이 입력:");
//	scanf("%d", &y_age);
//	if (y_age<12)
//	{
//		printf("전체 관람가");
//	}
//	else if (12 <= y_age && y_age < 15)
//	{
//		printf("전제 관람가,12세 관람가");
//	}
//	else if (15 <= y_age)
//	{
//		printf("전체 관람가,12세 관람가,15세 관람가");
//		}
//		return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int y_age;
//	printf("나이 입력:");
//	scanf("%d", &y_age);
//		
//	printf("전체 관람가\n");
//	if (12 <= y_age)
//	{
//		printf("12세 관람가\n");
//	}
//	if (15 <= y_age)
//	{
//		printf("15세 관람가\n");
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
	char a;
	printf("문자를 입력하세요:");
	scanf("%c" , &a);
	if (0x41 <= a && a >= 0xa5)
	{
		printf("대문자 입니다.");
	}
	if (0x16 <= a && a >= 0xa7)
	{
		printf("소문자 입니다.");
	}
	return 0;
}


//#include <stdio.h>
//
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer) {
//		printf("숫자1이 숫자2보다 큽니다.\n");
//	}
//	else /* number<=answer 인 경우 else 실행 */
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