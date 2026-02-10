//#include <stdio.h>
//int main() {
//
//	int i;
//	int hap = 0;
//	i = 1;
//	while (i <= 100) {
//		if (i % 5 == 0 || i % 8 == 0) {
//			hap = hap + i;
//
//		}
//		i++;
//	}
//	printf("%d", hap);
//}
#include <stdio.h>
int main()
{
	int num, num1 = 0, num2 = 0;
	scanf("%d", &num);
	int i = 0;
	while (num !=0) {
		num=num / 10;

		i++;
	}

	printf("%d",i);


}