//#include <stdio.h>
//int main()
//{
//	char alphabet;
//	while (1) {
//		printf("알파벳을 입력해주세요(다른 것 입력시 다시 입력):");
//		scanf("%c", &alphabet);
//		if (alphabet >= 'a' && alphabet <= 'z')
//		{printf("소문자를 입력하셨습니다.\n");}
//		else if (alphabet >= 'A' && alphabet <= 'Z')
//		{printf("대문자를 입력하셨습니다.\n");}
//		else { continue; }
//		printf("입력한 값:%c\n", alphabet);
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int number, total = 0;
//	while (1) {
//		printf("양수를 입력해주세요(0입력시 종료);");
//		scanf("%d", &number);
//		if (number == 0) { break; }
//		else if (number < 0) { continue; }
//
//		total = total + number;
//		printf("%d\n", total);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int multi = 1, num = 1;
//	while (1) {
//		multi *= num;
//		if (multi >= 50000) {
//			printf("%d", num); break;
//		}
//		num++;
//	}
//		
//	return 0;
//}
#include <stdio.h>
int main()
{
	char A;
	A = 65;
	printf("A=%c,A=%d\n",A,A);
	A++;
	printf("A=%c,A=%d\n", A, A);
	return 0;
}