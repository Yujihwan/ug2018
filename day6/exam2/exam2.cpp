// exam2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{

	char num[5] = { 1,2,3,4,5 };

	printf_s("%d\n%d\n%d\n%d\n%d\n", num[0], num[1], num[2], num[3], num[4]);
	printf_s("%d\n%d\n%d\n%d\n%d\n", &num[0], &num[1], &num[2], &num[3], &num[4]);




    return 0;
}

