// exam10.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{

	int nHeight=0;
	int nDays=0;

	do {
		printf("%d 일째 %d cm 등반완료\n", nDays, nHeight);
		nHeight = nHeight + 55;
		nDays = nDays + 1;
		
	} while (nHeight < 300);
	printf("달팽이가 우물을 올리가는데 걸린 일수 : %d\n", nDays);

	//nHeight = 0; (while문으로 시작하게 되면 검사를 먼저 하기때문에 조건에 만족하지않으면 실행하지 않는다.)
	while (nHeight < 300) {
		printf("%d 일째 %d cm 등반완료\n", nDays, nHeight);
		nHeight = nHeight + 55;
		nDays = nDays + 1;
	}




    return 0;
}

