// exam12.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{

	char word[32]; //32글자까지 입력받음
	scanf_s("%s", word, sizeof(word));
	int i, j = 0;
	int p = sizeof(word) / sizeof(word[0]); //p는 글자수
	int index=0;

	for (int i = 0; i < p; i++) {
		if (word[i] == 0x00) break;
		index++;
	}
	
	printf_s("%d\n", index);
	for (int i = 0; i < index / 2; i++)
	{
		char _temp;
		_temp = word[i];
		word[i] = word[(index - 1) - i];
		word[(index - 1) - i]= _temp;

	
	}

	printf_s("변환 결과 : %s\n", word);



    return 0;
}

