// exam11.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{

	int i;
	i = 0;               //초기식
	while (i <= 100) {   //조건식
		printf("%d\n", i);
		//i = i + 1;
		//i++;
	    i +=5;           //증감식

	}

	i = 0;
	while (i <= 50)
	{
		printf("-");     //반복해서 - 를 프린트함
		i++;

	}
	printf("\n");

	i = 100;
	while (i >= 0)
	{
		if ((i % 2) == 0) {
			printf("짝수: %d\n", i);
		}
		else
			printf("홀수: ");
		printf("%d\n", i);
		i -= 1;
	}
	i = 0;
	while (i >= 100)
	{
		if ((i % 3) == 0) {
			i++;
		}
		else
			i == 0;
	}





    return 0;
}

