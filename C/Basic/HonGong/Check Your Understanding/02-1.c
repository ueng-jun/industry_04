#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
int main()
{
	//2. 빈칸 채우기: 0을 0로 나누면 0입니다. 
	printf("%d을 %d로 나누면 %lf입니다.\n\n", 1, 2, 0.5); 

	//3. 실행 결과 보기 

	/*
	printf("Hello world!\n"); 
	*/

	printf("Be\rHappy!\nBaby\n"); 
  
  // 결과: Wello world는 추석 처리 / Happy! \n Baby로 출력
  
	return 0;
}
