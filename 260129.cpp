//#include <stdio.h>
//int main()
//{
//	int count = 0;
//	while (count < 3)
//	{
//		printf("현재 count:%d\n",count);
//		printf("count가 3보다 작은 동안 반복\n");
//		count++;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int count = 3;
//	while (count > 0)
//	{
//		printf("현재 count:%d\n", count);
//		printf("count가 0보다 큰 동안 반복\n");
//		count--;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int count = 6;
//		while(count > 0)
//	{
//			printf("C\n");
//			count--;
//	}
//		return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int count = -10;
//	while (count <= 0)
//	{
//		printf("%d\n",count);
//		count++;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int count = 0;
//	while (count <= 100)
//	{
//		printf("%d\n", count);
//		count=count+5;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int count = 3;
//	while (count)
//	{
//		if (count == 1)
//		{
//			break;
//		}
//		printf("현재 count:%d\n", count);
//		printf("count가 0이 아니면 반복\n");
//		count--;
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
	char alphabet;
	while (1) {
		printf("알파벳을 입력해주세요(다른 것 입력시 다시 입력):");
		scanf("%c", &alphabet);
		if (alphabet >= 'a' && alphabet <= 'z'); {
			pirntf("소문자를 입력하셨습니다.\n");
		}
		else if (alphabet >= 'A' && alphabet <= 'Z')
		{
			printf("대문자를 입력하셨습니다.\n");
		}
		else { contine; }
		printf("입력한 값:%c\n", alphabet);
	}
}

