// exam6_1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int ary[] = { 4,5,2,1,5,6,7,3,2,6,7,3,2,3,5,6,1,12,42 };
	int nFind;
	int nCount = 0;

	printf("찾기를 원하는 숫자를 입력하세요(1~20):\n");
	scanf_s("%d", &nFind);
	int _ary = sizeof(ary) / sizeof(int);

	for (int i = 0; i < _ary; i++) {
		if (ary[i] == nFind)
			nCount++;

	}
	printf_s("%d은 %d개 있습니다\n", nFind, nCount);




    return 0;
}

