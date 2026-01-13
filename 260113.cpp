//#include <stdio.h>
//
//int main()
//{
//	int input;
//	scanf("%d", &input);
//	if (input % 3 == 0) {
//		printf("input은 3의배수 입니다.\n");
//	}
//	if (input % 6 == 0) {
//		printf("input은 6의배수 입니다.\n");
//	}
//	if (input % 9 == 0) {
//		printf("input은 9의배수 입니다.\n");
//	}
//}
//#include <stdio.h>
//int main()
//{
//	char command = 'i';
//
//	switch (command)
//	{
//	case'i':
//			printf("아이템창 오픈\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char command = 'i';
//	switch (command) {
//	case'i':
//		printf("아이템창 오픈\n");
//	case'm':
//		printf("지도 오픈\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char command = 'm';
//
//	switch (command)
//	{
//	case 'i':printf("아이템창 오픈\n");
//	case'm':printf("지도 오픈\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char command = 'm';
//	switch (command) {
//	case'i':printf("아이템창 오픈\n");
//		break;
//	case'm':printf("지도 오픈\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char command;
//	printf("커맨드를 입력하세요:");
//	scanf("%c", &command);
//	switch (command) {
//	case'i':printf("아아템 오픈\n");
//		break;
//	case'm':printf("지도 오픈\n");
//		break;
//	default:printf("지정된 기능이 없습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char number = 1;
//	switch (number)
//	{
//	case 1:printf("one\n");
//	case 2:printf("two\n");
//	case 3:printf("three\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int input1;
//	int input2;
//	printf("숫자를 입력해주세요:");
//	scanf("%d%d", &input1, &input2);
//	char oper;
//	printf("oper 입력:");
//		scanf(" %c", &oper);
//		switch (oper)
//		{
//		case'*':printf("%d*%d=%d", input1, input2, input1 * input2);
//			break;
//		case'+':printf("%d+%d=%d", input1, input2, input1 + input2);
//			break;
//		case'-':printf("%d-%d=%d", input1, input2, input1 - input2);
//			break;
//		case'/':printf("%d/%d=%d", input1, input2, input1 / input2);
//			break;
//		case'%':printf("%d % %d=%d", input1, input2, input1 % input2);
//			break;
//		default:printf("제대로된 값을 입력하시오.\n");
//		}
//		return 0;
//}
//#include <stdio.h>
//int main() {
//	int mouth;
//	scanf("%d", &mouth);
//	switch (mouth)
//	{
//	case 1:printf("January");
//		break;
//	case 2:printf("February");
//		break;
//	case 3:printf("March");
//		break;
//	case 4:printf("April");
//		break;
//	case 5:printf("May");
//		break;
//	case 6:printf("June");
//		break;
//	case 7:printf("July");
//		break;
//	case 8:printf("August");
//		break;
//	case 9:printf("September");
//		break;
//	case 10:printf("October");
//		break;
//	case 11:printf("November");
//		break;
//	case 12:printf("December");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char command;
//	printf("<,a 왼쪽으로 이동\n");
//	printf(">,d 오른쪽으로 이동\n");
//	scanf("%c", &command);
//	switch (command) {
//	case '<':
//	case 'a':
//		printf("왼쪽으로 이동 합니다.\n");
//		break;
//	case '>':case'd':
//		printf("오른쪽으로 이동합니다.\n");
//		break;
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
	int input;
	const int option = 3;
	printf("메뉴를 선택하세요.");
	printf("1. 새 게임 2. 이어하기 3. 옵션\n");
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		printf("새 게임 시작.\n");
		break;
	case 2:
		printf("세이브 데이터 로드\n");
		break;
	case option:
		printf("옵션 세팅.\n");
		break;
	default:
		printf("지정된 기능이 없습니다.\n");
	}
	return 0;
}