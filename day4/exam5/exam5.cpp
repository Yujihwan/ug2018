// exam5.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

void printArray(int nums[])
{
	for (int i = 0; i < 5; i++) {
		printf_s("%d", nums[i]);
	}
		
	printf_s("\n");

}



int main()
{
	int nums[5];

	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &nums[i]);
	}

	/*for (int i = 0;  i < 5; i++) {
		printf_s("%d \n"), nums[i];
	}

	for (int i = 0; i < 5; i++) {
		printf_s("%d \n", nums[i]);
	}*/
    return 0;
}

