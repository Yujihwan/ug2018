// exam4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

void sum(int a, int b, int *c)
{
	//int c = a + b;
	//return c;
	*c = a + b;
}
int main()// void -c와 int c는 주소값이 다르다.
{
	int c = 0;
    sum(1, 2, &c );
	printf_s("%d \n", c);



    return 0;
}

