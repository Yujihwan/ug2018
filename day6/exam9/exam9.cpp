// exam9.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{

	char str[80] = "dream1";
	char str2[] = "dream2";                         //셋다 유사한 말이다.
	const char *str3 = "dream3"; // * : 주소는 바꿀 수 있으나 내용은 바꿀 수 없다.
	char *str4;
	str4 = (char *)str3;


	//str3[0] = 'D'; -> fail


	str4[0] = 'D'; // 이렇게 하면 내용 변경 가능.
	printf_s("%s \n", *str3);

    return 0;
}

