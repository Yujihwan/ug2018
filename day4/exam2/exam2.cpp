// exam2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


void output_gugudan(int nDan)
{
	int i, j;
	for (i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", i, nDan, i*nDan);
		
	}
}

int main()
{
	int dan;
	for (dan = 1; dan <= 9; dan++) {
		 output_gugudan(dan);
	}




    return 0;
}

