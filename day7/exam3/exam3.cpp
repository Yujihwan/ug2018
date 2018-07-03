// exam3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

void count()
{
	int a = 0; //함수를 벗어나면 증가하지 않는다.
	a++; 
	printf_s("%d\n", a);
}
void count2()
{
	static int b = 0; //함수를 벗어나도 증가된다.
	b++;
	printf_s("%d\n", b);
}
void count3(int *a)
{
	(*a)++;
	printf_s("%d\n", *a);
}

int main()
{
	count();
	count();
	count2();
	count2();
	
	int a = 0;
	count3(&a);
	count3(&a);
    return 0;
}

