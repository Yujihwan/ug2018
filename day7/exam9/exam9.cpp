// exam9.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{

	const char *ptr_ary[5] = {// 메모리 절약. 밑은 메모리 낭비.
		"dog",
		"elephant",
		"horse",
		"tiger",
		"lion"
	};
	char str_ary[5][16] = { //사이즈를 정했기에 const붙이지 않아도됨.
		"dog",
		"elephant",
		"horse",
		"tiger",
		"lion"
	};

	printf_s("%8s%8s\n", ptr_ary[0], str_ary[1]);

    return 0;
}

