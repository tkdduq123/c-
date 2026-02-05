//#include <stdio.h>
//int main()
//{
//	char A;
//	A = 'A';
//	while (A <= 'Z') {
//		if (A == 'F') {
//			A++;
//		}
//		printf("%c\n", A);
//		A++;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main() {
//	int num, total = 0;
//	int player=0;
//	while (1) {
//		printf("%c:", 'A' + player);
//		player++;
//		player = player % 2;
//
//		scanf("%d", &num); 
//		total = total + num; 
//		printf("=>%d\n", total); 
//		if (total >=31) {   
//			printf("%c가 이겼습니다.",'A' + player);
//			break; 
//		} 
//	} 
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int temperature = 20;
//	do
//	{
//		printf("현재 온도:%d\n", temperature);
//		temperature--;
//	} while (temperature > 28);
//	return 0;
//}
#include <stdio.h>
int main()
{
	int input;
	enum { GAMEOVER, NEWGAME, LOADGAME, OPTION };
	do {
		printf("\n메뉴를 선택하세요.\n");
		printf("1.새게임2.이어하기3.옵션(0:게임종료)\n");
		scanf("%d", &input);
		switch (input) {
		case NEWGAME:
			printf("새 게임 시작\n");
			break;
		case LOADGAME:printf("세이브 데이터 로드\n");
			break;
		case OPTION:
			printf("옵션 세팅");
			break;
		}
	}
	while (input != GAMEOVER);
	printf("게임을 종료 합니다.\n");
		return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int input;
//
//}