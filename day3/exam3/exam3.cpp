// exam3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	
	int a, b;
	
	printf("두 정수를 입력하세요:");
	scanf_s("%d,%d", &a, &b);
	
	double c = (double)a / (double)b;
	//double c = a / b;

	printf("나눗셈 연산식은\n");
	printf("%d/%d = %lf입니다\n", a, b, c);

	int d;
	printf("아스키코드값을 입력하세요:");
	scanf_s("%d", &d);
	printf("아스키문자는 %c 입니다.\n", d);


    return 0;
}

