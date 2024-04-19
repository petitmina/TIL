#include <stdio.h>

struct GameInfo
{
  char * name;
  int year;
  int price;
  char * company;

  struct GameInfo * friendGame;
  
};

typedef struct GameInformation
{
  char * name;
  int year;
  int price;
  char * company;

  struct GameInfo * friendGame;
  
} GAME_INFO;

int main(void)
{
  // 구조체 사용
  struct GameInfo gameInfo1;
  //struct GameInfo gameInfo2;
   
  gameInfo1.name = "나도게임";
  gameInfo1.year = 2017;
  gameInfo1.price = 100;
  gameInfo1.company = "나도회사";

  // 구조체 출력
  printf("-- 게임 출시 정보  -- \n");
  printf("   게임명       : %s\n", gameInfo1.name);
  printf("   발매년도      : %d\n", gameInfo1.year);
  printf("   가격        : %d\n", gameInfo1.price);
  printf("   제작사       : %s\n", gameInfo1.company);

  //구조체를 배열처럼 초기화
  struct GameInfo gameInfo2 = {"너도게임", 2017, 100, "너도회사"};

  printf("-- 또 다른 게임 출시 정보  -- \n");
  printf("   게임명       : %s\n", gameInfo2.name);
  printf("   발매년도      : %d\n", gameInfo2.year);
  printf("   가격        : %d\n", gameInfo2.price);
  printf("   제작사       : %s\n", gameInfo2.company);

  //구조체 배열
  struct GameInfo gameArray[2] = {
    {"나도게임", 2017, 50, "나도회사"},
    {"너도게임", 2017, 100, "너도회사"}
  };
  
  //구조체 포인터
  struct GameInfo * gamePtr;
  gamePtr = &gameInfo1;

  printf("\n\n-- 미션맨의 게임 출시 정보  -- \n");
  // printf("   게임명       : %s\n", (*gamePtr).name);
  // printf("   발매년도      : %d\n", (*gamePtr).year);
  // printf("   가격        : %d\n", (*gamePtr).price);
  // printf("   제작사       : %s\n", (*gamePtr).company);
  printf("   게임명       : %s\n", gamePtr->name);
  printf("   발매년도      : %d\n", gamePtr->year);
  printf("   가격        : %d\n", gamePtr->price);
  printf("   제작사       : %s\n", gamePtr->company);
  

  //연관 업체 소개
  gameInfo1.friendGame = &gameInfo2;

  printf("--  연관 업체 게임 출시 정보  -- \n");
  printf("   게임명       : %s\n", gameInfo1.friendGame->name);
  printf("   발매년도      : %d\n", gameInfo1.friendGame->year);
  printf("   가격        : %d\n", gameInfo1.friendGame->price);
  printf("   제작사       : %s\n", gameInfo1.friendGame->company);

  //typedef
  //자료형에 별명 지정

  int i = 1;
  typedef int 정수;
  typedef float 실수;
  정수 정수변수 = 3; // int i = 3; 과 동일 코드
  실수 실수변수 = 3.23f;
  printf("\n\n 정수변수 : %d, 실수 변수 %f\n\n", 정수변수, 실수변수);

  typedef struct GameInfo 게임정보;
  게임정보 game1;
  game1.name = "한글 게임";
  game1.year = 2015;

  GAME_INFO game2;
  game2.name = "한글 게임";
  game2.year = 2014;


  struct GameInformation game3;
  game3.name = "한글 게임3";
  

  return 0;
}