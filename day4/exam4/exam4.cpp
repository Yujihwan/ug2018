// exam4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

int main()
{
	double num[5];
	scanf_s("%lf %lf %lf %lf %lf", &num[0], &num[1], &num[2], &num[3], &num[4]);
	int nMax;
	nMax = num[0];

	for (int i = 1; i < 5; i++) {
		if (nMax > num[i]){ 
			nMax = num[i];
		}
		//printf_s("%d\n", num[i]);
	}
	printf_s("%d\n", nMax);


    return 0;
}

