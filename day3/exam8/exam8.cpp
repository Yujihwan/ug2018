// exam8.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{


	char cHuman;

	scanf_s("%c", &cHuman, sizeof(cHuman));
	if (cHuman == 'm') {
		printf("남자입니다.");
	}
	else if (cHuman == 'f') {
		printf("여자입니다.");
	}
	else {
		printf("잘못 입력하였습니다.");
	}

    return 0;
}

