// exam1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int num;
	int *ptr;
	num = 3;
	ptr = &num;
	printf_s("%d %d \n", num, &num);
	printf_s("%d %d \n", *ptr, ptr);
	*ptr = 5;
	printf_s("%d %d \n", *ptr, ptr); //참조연산자 (*) + 주소값(&)  =  포인터가 가리키는 기억공간.
	printf_s("%d %d \n", num, &num);
	
	int *address;
	scanf_s("%d", &address);
	printf_s("%d\n", *address);
	//printf_s("%d %d\n", address, *(int *(address)); >> 포인터식 인티져형으로 변환.

	
	return 0;
}

