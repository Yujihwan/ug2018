// exam8.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	char strTemp[5] = "한글";

	printf("%s \n", strTemp);//대괄호는 선언할 때 쓰고 이후에 안써도된다.

	scanf_s("%s", strTemp);
	printf("%s \n", strTemp);


    return 0;
}

