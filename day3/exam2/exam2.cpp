// exam2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{

	printf("\x41 \n");
	printf("♩♪♬◆☆★◐◑○●◎⊙◈◇△▲▽▼□");
	printf("부호:%d, 부호없음:%u\n", -1, -1);
	printf("십진수%d, 팔진수%o, 십육진수%x \n", 16, 16, 16);
	printf("%x \n", '△');

	unsigned int a;
	unsigned char b; //0~255
	char c; // -128 ~ 127
	double _val = 0.00000001;

	printf("pi : %lf, %le \n", _val, _val);

	printf("%c %s \n", 'H', "Hello");


    return 0;
}

