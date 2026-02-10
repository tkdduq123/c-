#include <stdio.h>
int main()
{
	int num1, num2;
	scanf("%d%d", &num1, &num2);

	int start, end;
	if (num1 <= num2)
	{
		start = num1;
		end = num2;
	}
	else {
		start = num2;
		end = num1;
	}

	while (start <= end)
	{
		if (start % 2 == 1) {
			printf("%d ", start);
		}
		start++;
	}

	return 0;
}
//#include <stdio.h>
//int main()
//{
//	int i;
//	scanf("%d", &i);
//	while () {
//		\u2665
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int select;
//
//
//
//}
//#include <stdio.h>
//int main()
//{
//	int input;
//	enum { GAMEOVER, NEWGAME, LOADGAME, OPTION };
//	do {
//		printf("\n메뉴를 선택하세요.\n");
//		printf("1.새게임2.이어하기3.옵션(0:게임종료)\n");
//		scanf("%d", &input);
//		switch (input) {
//		case NEWGAME:
//			printf("새 게임 시작\n");
//			break;
//		case LOADGAME:printf("세이브 데이터 로드\n");
//			break;
//		case OPTION:
//			printf("옵션 세팅");
//			break;
//		}
//	} while (input != GAMEOVER);
//	printf("게임을 종료 합니다.\n");
//	return 0;
//}
//#include <stdio.h>
//int main() {
//	int hap = 0;
//	int i;
//	i = 195;
//	while (i <= 200) {
//		hap += i;
//		i++;
//	}
//	printf("%d", hap);
//}
#include <stdio.h>
int main() {
	printf("d");
}