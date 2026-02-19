//#include <stdio.h>
//int main()
//{
//	int num, tenN = 1,num2;
//	scanf("%d", &num);
//	int ori = num;
//
//	while (num > 10) {
//		num = num / 10;
//		//num1 = num % 10;
//		//printf("%d\n",num1);
//		tenN = tenN * 10;
//		//i++;	
//	}
//	//num2 = num2 / 10;
//	//printf("%d", tenN);
//
//
//	while (tenN != 0) {
//		num2 = ori / tenN;
//		ori = ori % tenN;
//		tenN = tenN / 10;
//
//		while (num2 != 0) {
//			num2--;
//			printf("\u2665\u2665");
//		}
//		printf("\n");
//
//	}
//
//}
#include <stdio.h>
int main()
{
	int input;
	enum { 채우기,로그인, 회원가입, 옵션, 만든사람들 };
	do {
		printf("1. 로그인\n2. 회원가입\n3. 옵션\n4. 만든 사람들");
		scanf("%d", &input);
		switch (input) {
		case 로그인:printf("로그인");
			break;

		case 회원가입:printf("회원가입");
			break;

		case 옵션:printf("옵션");
			break;

		case 만든사람들:printf("만든사람들");
			break;
		}
	} while (input < 5 and input>0);
}