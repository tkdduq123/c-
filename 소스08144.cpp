//#include <stdio.h>
//
//int main()
//{
//    int coin;
//    printf("돈을 입력해주세요.(원)");
//    scanf("%d", &coin);//27500
//
//    int coin10000 = coin / 10000;
//    coin = coin % 10000;
//    int coin5000 = coin / 5000;
//    coin = coin % 5000;
//    int coin1000 = coin / 1000;
//    printf("만원권%d개,", coin10000);
//    printf("오천원권%d개,", coin5000);
//    printf("천원권%d개,", coin1000);
//    printf("나머지는 동전입니다.");
//
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int price;
//    printf("젤리의 가격을 입력해주세요.(원)");
//    scanf("%d", &price);
//
//    int coin = 1000 - price;
//    int a500 = coin / 500;
//    coin = coin % 500;
//    int a100 = coin / 100;
//    coin = coin % 100;
//    int a50 = coin / 50;
//    coin = coin % 50;
//    int a10 = coin / 10;
//    printf("오백원 동전은%d개", a500);
//    printf("백원 동전은%d개", a100);
//    printf("오십원 동전은%d개", a50);
//    printf("십원 동전은%d개", a10);
//
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    int randInt = rand()% 10;
//    int nextInt = rand() % 10;
//    printf("첫숫자:%d\n", randInt);
//    printf("다음숫자:%d", nextInt);
//
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//    srand((unsigned int)time(NULL));
//    int randInt = rand() % 10;
//    int nextInt = rand() % 10+50;
//    printf("첫숫자:%d\n", randInt);//0~9
//    printf("다음숫자:%d", nextInt);//50~59
//
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//    srand((unsigned int)time(NULL));
//    printf("내주머니에 있는 돈은");
//    int mymoney = (rand() % 10 + 1) * 1000;//1000~10000
//    printf("%d원이다.\n", mymoney);
//    int coin500 = rand()% 4 * 500;//0~1500
//    int coin100 = rand() % 5000;//0~4999
//    coin100 = coin100 / 100 * 100;//0~4900
//    printf("그리고 과자의 가격은");
//    printf("%d원이다.", coin500 + coin100);
//    printf("\n나는 과자를 살수있을까?");
//
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int apple = 15;
//    if (apple == 15)//apple이 15이면 실행
//    {
//        printf("apple은 15개 있습니다.\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int apple = 15;
//    if (apple > 7)//apple이 7보다 크면 실행
//    {
//        printf("alppe은 7개보다 많습니다.\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int apple = 15;
//    if (apple < 20)//apple은 20개 보다 적으면 실행
//    {
//        printf("apple은 20개보다 작습니다.\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int apple = 15;
//    if (apple)//apple이 0이 아니면 실행
//    {
//        printf("apple은 0개가 아닙니다.\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int apple = 15;
//    if (!apple)//apple이 0이 아니면 실행
//    {
//        printf("apple은 0개가 아닙니다.\n");
//    }
//    return 0;
//}
