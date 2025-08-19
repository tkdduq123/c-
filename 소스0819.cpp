//#include <stdio.h>
//
//int main()
//{
//    int apple = 0;
//    if (apple == 10)//apple이 10이면 실행
//    {
//        printf("apple는 10개 있습니다.\n");
//    }
//    else if (apple == 0)//apple이 0이면 실행
//    {
//        printf("apple는 하나도 없습니다.\n");
//    }
//    return 0;
//}
//{
//    int apple = 15;
//    if (!apple)//apple이 0이면 실행
//    {
//        printf("apple는 하나도 없습니다.\n");
//    }
//    else //if가 틀리면 (apple이 0아니면) 실행
//    {
//        printf("apple는 0개가 아닙니다.\n");
//    }
//    return 0;
//}
//{
//	int a;
//	scanf("%d", &a);
//	if (a > 0)
//	{
//		printf("%d는 양수입니다.\n",a);
//	}
//	else if (a < 0)
//	{
//		printf("%d는 음수 입니다.\n",a);
//	}
//	else
//	{
//		printf("%d는 0입니다.\n",a);
//	}
//}
//#include <stdio.h>
//
//int main()
//{
//	int number;
//	scanf("%d", &number);
//	if (number<=99&&number>=10)
//	{
//		printf("%d는두자리 입니다.",number);
//	}
//	else
//	{
//		printf("%d는 두자리가 아닙니다.",number);
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
//		printf("키가 150 이상입니다");
//	}
//	if (height > 160)
//	{
//		printf("키가 160이상입니다.");
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
//		printf("키가 150이상 입니다,");
//	}
//	else if (height > 160)
//	{
//		printf("키가 160이상입니다.");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int y_age;
//	scanf("%d", &y_age);
//	if (y_age >= 0)
//	{
//		printf("전체 관람가 ");
//	}
//	if (y_age>=12)
//	{
//		printf("12세 관람가 ");
//	}
//	if (y_age >= 15)
//	{
//		printf("15세 관람가");
//	}
//	return 0;
//}
#include <stdio.h>

int main()
{
	char q;
	scanf("%c", &q);
		if (q > 97)
		{
			printf("%c는 소문자 입니다");
	}
		else
		{
			printf("%c는 대문자 입니다.");
		}
		return 0;
}

