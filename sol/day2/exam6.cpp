// 계산기2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	double fUseElec;//사용량
	double fTotal;//총사용 요금
	
	printf("전기사용량을 입력하세요(kw): \n");

	scanf_s("%lf", &fUseElec);
	
	fTotal = 660 + (fUseElec * 88.5);
	
	double tax = fTotal * 0.09;
	double Final = fTotal + tax;
	
	printf("전기 사용 요금은:%lf\n", Final);



    return 0;
}

