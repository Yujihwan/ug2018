// exam7.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{

	int nAge;

	printf("나이를 입력하세요:");
	scanf_s("%d", &nAge);

	if (nAge > 5 and nAge < 70)
		printf("입장료는 3,000원입니다.\n");
	else
		printf("무료입장입니다.\n");
		



    return 0;
}

