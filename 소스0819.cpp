//#include <stdio.h>
//
//int main()
//{
//    int apple = 0;
//    if (apple == 10)//apple�� 10�̸� ����
//    {
//        printf("apple�� 10�� �ֽ��ϴ�.\n");
//    }
//    else if (apple == 0)//apple�� 0�̸� ����
//    {
//        printf("apple�� �ϳ��� �����ϴ�.\n");
//    }
//    return 0;
//}
//{
//    int apple = 15;
//    if (!apple)//apple�� 0�̸� ����
//    {
//        printf("apple�� �ϳ��� �����ϴ�.\n");
//    }
//    else //if�� Ʋ���� (apple�� 0�ƴϸ�) ����
//    {
//        printf("apple�� 0���� �ƴմϴ�.\n");
//    }
//    return 0;
//}
//{
//	int a;
//	scanf("%d", &a);
//	if (a > 0)
//	{
//		printf("%d�� ����Դϴ�.\n",a);
//	}
//	else if (a < 0)
//	{
//		printf("%d�� ���� �Դϴ�.\n",a);
//	}
//	else
//	{
//		printf("%d�� 0�Դϴ�.\n",a);
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
//		printf("%d�µ��ڸ� �Դϴ�.",number);
//	}
//	else
//	{
//		printf("%d�� ���ڸ��� �ƴմϴ�.",number);
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
//		printf("Ű�� 150 �̻��Դϴ�");
//	}
//	if (height > 160)
//	{
//		printf("Ű�� 160�̻��Դϴ�.");
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
//		printf("Ű�� 150�̻� �Դϴ�,");
//	}
//	else if (height > 160)
//	{
//		printf("Ű�� 160�̻��Դϴ�.");
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
//		printf("��ü ������ ");
//	}
//	if (y_age>=12)
//	{
//		printf("12�� ������ ");
//	}
//	if (y_age >= 15)
//	{
//		printf("15�� ������");
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
			printf("%c�� �ҹ��� �Դϴ�");
	}
		else
		{
			printf("%c�� �빮�� �Դϴ�.");
		}
		return 0;
}

