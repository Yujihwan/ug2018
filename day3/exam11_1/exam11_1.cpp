// exam11_1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int i;
	i = 0;
	int sum=0;

	while (i <= 100){
		i++;
		if ((i % 3) == 0) {
			sum = sum + i;
			printf("%d \n", sum);
		}
		
		
			
	}
    return 0;
}

