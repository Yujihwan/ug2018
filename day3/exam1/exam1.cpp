// exam1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	double ondo, ondo2, ondo3, ondo4, miles;
	
	printf("화씨를 입력하세요.:\n");
	scanf_s("%lf", &ondo);
	printf("섭씨를 입력하세요.:\n");
	scanf_s("%lf", &ondo3);
	printf("마일을 입력하시오:\n");
	scanf_s("%lf", &miles);


	
	ondo2 = (ondo - 32) / 1.8;
	printf("================================================\n");
	printf("\t***보고서***\n");
	printf("================================================\n");
	printf("%lf 화씨는 섭씨%lf \n", ondo, ondo2);

	
	
	ondo4 = (ondo3*1.8) + 32;
	printf("%lf 섭씨는 화씨%lf \n", ondo3, ondo4);
	printf("%lf 마일은 %lf 킬로미터입니다. \n", miles, miles / 0.62137);

    return 0;
}

