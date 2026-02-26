#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand((unsigned int)time(NULL));
	int command;
	int day = 0;
	int study = 0;
	int exercise = 0;
	int eat = 0;
	int shop = 0;
	do {
		printf("\n%d번째 날 !\n", ++day);
		printf("오늘도 뭐할까요?\n");
		printf("1. 코딩공부한다\n");
		printf("2. 운동을 한다\n");
		printf("3. 과식하기\n");
		printf("4. 쇼핑하기\n");
		printf("그외. 끝낸다.\n>>");
		scanf("%d", &command);
		if (command<1 || command>4)
			break;
		else if (command == 1) {
			int randInt = rand() % 5 + 1;

			switch (randInt) {
			case 1:
				printf("기분이 좋네요.\n");
			case 3:
				printf("도서관에서 ");
				break;
			case 2:
				printf("기분이 나빠요.\n");
			case 4:
				printf("카페에서 ");
				break;
			case 5:printf("학원에서 ");
			}
			printf("코딩 공부 합시다.\n");
			study++;
		}
		else if (command == 2)
		{
			int randInt = rand() % 4 + 1;

			switch (randInt) {
			case 1:
				printf("기분이 좋네요.\n");
			case 3:
				printf("헬스장에서.");
				break;
			case 2:
				printf("기분이 나빠요.\n");
			case 4:
				printf("운동장에서 ");
			}
			printf("운동 합시다.\n");
			exercise++;
		}
		else if (command == 3) {
			int randInt = rand() % 5 + 1;

			switch (randInt) {
			case 1:
				printf("기분이 좋네요.\n");
			case 3:
				printf("식당에서 ");
				break;
			case 2:
				printf("기분이 나빠요.\n");
			case 4:
				printf("집에서 ");
				break;
			case 5:printf("급식실에서 ");
			}
			printf("밥먹읍시다.\n");
			eat++;
		}
		else if (command == 4) {
			int randInt = rand() % 4 + 1;

			switch (randInt) {
			case 1:
				printf("기분이 좋네요.\n");
			case 3:
				printf("쇼핑몰에서 ");
				break;
			case 2:
				printf("기분이 나빠요.\n");
			case 4:
				printf("온라인에서 ");
			}
			printf("쇼핑 합시다.\n");
			shop++;
		}
	} while (1);
	if (day <= 3) {
		printf("그대로 입니다...\n");
	}
	else {
		if (study > exercise && study> shop && study> eat) {
			int level = study / 8;
			switch (level) {
			case 0:
				printf("코딩새싹이 되었습니다.!\n");
				break;
			case 1:
				printf("프로그래머가 되었습니다.!\n");
				break;
			case 2:
				printf("FrontEnd 개발자가 되었습니다.!\n");
				break;
			case 3:
				printf("BackEnd 개발자가 되었습니다.!\n");
				break;
			default:
				printf("풀스택 개발자가 되었습니다.!\n");
			}
		}
		if (exercise > shop && exercise > study && exercise > eat) {
			int level = exercise / 8;
			switch (level) {
			case 0:
				printf("그대로 입니다...\n");
				break;
			case 1:
				printf("몸이 건강하게 되었습니다.!\n");
				break;
			case 2:
				printf("근육이 붙게 되었습니다.!\n");
				break;
			case 3:
				printf("몸짱이 되었습니다.!\n");
				break;
			default:
				printf("보디 빌더가 되었습니다.!\n");

		}
		}
		if (shop > exercise && shop > study && shop > eat) {
			int level = study / 8;
			switch (level) {
			case 0:
				printf("그대로 입니다.\n");
				break;
			case 1:
				printf("다양한 옷을 입어 보게 되었습니다.\n");
				break;
			case 2:
				printf("옷을 잘입게 되었습니다.!\n");
				break;
			default:
				printf("가난해졌습니다.\n");
			}
		}
		if (eat > exercise && eat > study && eat > shop) {
			int level = study / 8;
			switch (level) {
			case 0:
				printf("살이 찌게 되었습니다.!\n");
				break;
			case 1:
				printf("비만이 되었습니다.!\n");
				break;
			case 2:
				printf("고도 비만이 되었습니다.!\n");
			default:
				printf("먹방 유튜버가 되었습니다.\n");
			}
		}
	}
	return 0;
}