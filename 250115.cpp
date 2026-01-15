//#include <stdio.h>
//int main()
//{
//	int number;
//	printf("숫자를 입력해 주세요:");
//	scanf("%d", &number);
//	switch (number)
//	{
//	case 1:printf(".");
//		break;
//	case 2:printf(".");
//		break;
//	case 3:printf("짝");
//		break;
//	case 4:printf(".");
//		break;
//	case 5:printf(".");
//		break;
//	case 6:printf("짝");
//		break;
//	case 7:printf(".");
//		break;
//	case 8:printf(".");
//		break;
//	case 9:printf("짝");
//	default:printf("0~9사이의 숫자를 입력해 주세요.");
//	}
// return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char command = 'x';
//	switch (command)
//	{
//	    case'x':
//		printf("알파벳x입력.\n");
//		break;
//		case 'X':
//			printf("엑스표 입력\n");
//			break;
//	}
//	return 0;
//}
// 
// 
//#include <stdio.h>
//int main() {
//	printf("Hello World!");
//		return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i_menu;
//	printf("1.더하기 2.뺴기\n");
//	scanf("%d",&i_menu);
//		switch (i_menu)
//		{
//		case 1:
//		{
//			int number1, number2;
//			printf("숫자 두 개를 입력하세요\n");
//			scanf("%d", &number1, &number2);
//			printf("%d+%d=%d\n",
//				number1, number2, number1 + number2);
//			break;
//		}
//		case 2:
//		{
//			int number3, number4;
//			printf("숫자 두 개를 입력하세요\n");
//			scanf("%d %d", &number3, &number4);
//			printf("%d-%d=%d\n",
//				number3, number4, number3 - number4);
//			break;
//		}
//		}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char a;
//	scanf("%c", &a);
//	switch (a) {
//	case 'w':printf("위 방향키를 입력하셨습니다.");
//		break;
//	case 's':printf("아래 방향키를 입력하셨습니다.");
//		break;
//	case 'a':printf("왼쪽 방향키를 입력하셨습니다.");
//		break;
//	case 'd':printf("오른쪽 방향키를 입력하셨습니다.");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int appetizer;
//	int mainDish;
//	int dessert;
//	printf("1.캐비어 2.샐러드 3.푸아그라\n1.스테이크 2.생선요리 3.양갈비\n1.케잌 2.아이스크림 3.초콜릿 무스");
//	scanf("%d %d %d", &appetizer,&mainDish,&dessert);
//
//	printf("주문하신 음식은 ");
//	switch (appetizer) {
//	case 1:printf("캐비어");
//		break;
//	case 2:printf("샐러드,");
//		break;
//	case 3:printf("푸아그라,");
//		break;
//	}
//	switch (mainDish) {
//	case 1:printf("스테이크,");
//		break;
//	case 2:printf("생선요리,");
//		break;
//	case 3:printf("양갈비,");
//		break;
//	}
//	switch (dessert) {
//	case 1:printf("케잌 입니다.");
//		break;
//	case 2:printf("아이스크림 입니다.");
//		break;
//	case 3:printf("초콜릿무스 입니다.");
//		break;
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
	while (1) {
		printf("조건이 참일 경우 반복출력\n");
	}
	return 0;
}