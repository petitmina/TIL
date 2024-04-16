#include <stdio.h>
void swap(int a, int b);
void swap_addr(int * a, int * b);
void changeArray(int * ptr);

int main(void)
{
  //포인터

  int john = 1;
  int julia = 2;
  int michael = 3;

  printf("john네 주소 : %d, 암호 : %d\n", &john, john);
  printf("julia네 주소 : %d, 암호 : %d\n", &julia, julia);
  printf("michael네 주소 : %d, 암호 : %d\n", &michael, michael);


  //미션맨
  
  //아파트의 각 집에 방문하여 문에 적힌 암호 확인

  int * 미션맨;
  미션맨 = &john;
  printf("\n미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

  미션맨 = &julia;
  printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

  미션맨 = &michael;
  printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

  //각 암호에 3을 곱하기
  미션맨 = &john;
  *미션맨 = *미션맨 * 3;
  printf("\n미션맨이 암호를 바꾼 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

  미션맨 = &julia;
  *미션맨 = *미션맨 * 3;
  printf("미션맨이 암호를 바꾼 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

  미션맨 = &michael;
  *미션맨 = *미션맨 * 3;
  printf("미션맨이 암호를 바꾼 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨); 

  //스파이
  //미션맨이 바꾼 암호에서 2를 빼라!
  int * 스파이 = 미션맨;
  printf("\n... 스파이가 미션 수행하는 . 중...\n\n");

  스파이 = &john;
  *스파이 = *스파이 -2;
  printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", 스파이, *스파이);

  스파이 = &julia;
  *스파이 = *스파이 -2;
  printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", 스파이, *스파이);

  스파이 = &michael;
  *스파이 = *스파이 -2;
  printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", 스파이, *스파이);

  printf("\n ...철수 영희 민수는 집에 오고서는 바뀐 암호를 보고 깜놀 ...\n\n");

  printf("john네 주소 : %d, 암호 : %d\n", &john, john);
  printf("julia네 주소 : %d, 암호 : %d\n", &julia, julia);
  printf("michael네 주소 : %d, 암호 : %d\n", &michael, michael);

  //참고로.. 미션맨이 사는 곳의 주소 &미션맨 으로 확인
  printf("미션맨의 주소 : %d\n", &미션맨);
  printf("스파이의 주소 : %d\n", &스파이);

  //배열
  int arr[3] = {5, 10, 15};
  int * ptr = arr;

  for (int i = 0; i < 3; i++)
  {
    // printf("배열 arr[%d] 의 값 : %d\n", i, arr[i]);
    printf("배열 arr[%d] 의 값 : %d\n", i, *(arr + i)); //위의 표현과 같은 표현
  }
  
  for (int i = 0; i < 3; i++)
  {
    printf("\n배열 ptr[%d] 의 값 : %d\n", i, ptr[i]);
  }

  // *(arr + i) == arr[i] 똑같은 표현
  // arr == arr의 배열의 첫번째 값의 주소와 동일 == &arr[0]
  printf("arr 자체의 값 : %d\n", arr);
  printf("arr[0]의 주소 : %d\n", &arr[0]);

  printf("arr 자체의 값이 가지는 주소의 실제 값 : %d\n", *arr);
  printf("arr[0] 의 실제 값 : %d\n", *&arr[0]);

  // *& 는 아무것도 없는 것과 같다 & 는  *는 그 주소의 값이기때문에 
  // *& 는 서로 상쇄된다

  // a와 b의 값을 바꾼다 
  int a = 10;
  int b = 20;
  printf("a 의  : %d\n", &a);
  printf("b 의  : %d\n", &b);

  printf("Swap 함수 전 => a : %d, b : %d\n", a, b);
  swap(a, b);
  printf("Swap 함수 후 => a : %d, b : %d\n", a, b);

  //  값에 의한 복사(call by value) -> 값만 복사한다는 의미
  //주소값을 넘기면? 메모리 공간에 있는 주소값 자체를 넘기면...

  printf("swap_addr() 함수 호출 전 => a : %d, b : %d\n\n", a, b);
	swap_addr(&a, &b);  
	printf("swap_addr() 함수 호출 후 => a : %d, b : %d\n\n", a, b);

  //배열일 때, arr2 -> 주소
  int arr2[3] = { 10, 20, 30 };
  changeArray(arr2);
  for (int i = 0; i < 3; i++)
  {
    printf("%d\n", arr2[i]);
  }
  
  

  return 0;
}

void swap(int a, int b)
{
  printf("swap 함수 내의 a 주소 : %d\n", &a);
  printf("swap 함수 내의 b 주소 : %d\n", &b);
  int temp = a;
  a = b;
  b = temp;
  printf("Swap 함수 내 => ㅁ : %d, b : %d\n", a, b);
}

void swap_addr(int * a, int * b)
{
    printf("swap_addr() 함수 안에서 a의 주소 : %p\n", a);
   	printf("swap_addr() 함수 안에서 b의 주소 : %p\n", b);
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("swap_addr() 함수 안 => a : %d, b : %d\n\n", *a, *b);
}

void changeArray(int * ptr)
{
  ptr[2] = 50;
}