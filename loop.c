#include <stdio.h>

int main(void)
  {
    // printf("Hello world\n");

    // ++
    /*int b = 20;
    printf("b 는 %d\n", ++b); //21
    printf("b 는 %d\n", b++); //21
    printf("b 는 %d\n", b); //22 */

    //반복문
    //for, while, do while

    //for문
    // for(int i = 1; i <= 10; i++)
    // {
    //   printf("Hello world %d\n", i);
    // }

    //while 문
    // int i = 1;
    // while(i <= 10)
    // {
    //   printf("Hello World %d\n", i++);
    // }

    //do while문
    // int i = 1;
    // do
    // {
    //   printf("Hello World %d\n", i++);
    // } while (i <=10);
    

    //이중 반복문
    // for (int i =1; i <= 3; i++)
    // {
    //   printf("첫 번째 반복문 : %d\n", i);

    //   for (int j = 1; j <= 5; j++)
    //   {
    //     printf("    두 번째 반복문 : %d\n", j);
    //   }
    // }

    //구구단
    // for (int i = 2; i <= 9; i++)
    // {
    //   printf("%d단 계산\n", i);
    //   for (int j = 1; j <= 9; j++)
    //   {
    //     printf("    %d x %d = %d\n", i, j, i*j);
    //   }
      
    // }

    //별 증가
    // for (int i = 0; i < 5; i++)
    // {
    //   for (int j = 0; j <= i; j++)
    //   {
    //     printf(" * ");
    //   }
    //   printf("\n");
    // }

    //별 오른쪽 정렬
    // for (int i = 0; i < 5; i++)
    // {
    //   for (int j = i; j < 5 - 1; j++)
    //   {
    //     printf(" ");
    //   }
    //   for (int k = 0; k <= i; k++)
    //   {
    //     printf("*");
    //   }
    //   printf("\n");
      
    // }

    //피라미드를 쌓아라 - 프로젝트
    int floor;
    printf("몇 층으로 쌓겠느냐? ");
    scanf("%d", &floor);
    for (int i = 0; i < floor; i++)
    {
      for (int j = i; j < floor - 1; j++)
      {
        printf(" ");
      }
      for (int k = 0; k < i * 2 + 1; k++)
      {
        printf("*");
      }
      printf("\n");
    }
    

    return 0;
  }