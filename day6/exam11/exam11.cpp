// exam11.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
void user(char *des,const char *src)
{
	while(*src != '\0') {
		*des = *src;
		src++;
		des++;
	}
	*des = 0x00;
}
int main()
{

	char str[80];
	user(str, "strawberry");
	//str = "strawberry";
	printf_s("%s\n", str);



    return 0;
}

