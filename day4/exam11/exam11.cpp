// exam11.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{

	char word[32]; //32글자까지 입력받음
	scanf_s("%s", word, sizeof(word));
	int i, j = 0;
	int p = sizeof(word) / sizeof(word[0]); //p는 글자수


	for (int i = 0; i < p; i++) {
		if (word[i] == 0x00) break;
		if ((word[i] >= 65 && word[i] <= 90) || //대문자
			(word[i] >= 97 && word[i] <= 120)) //소문자
			word[i] = '*';
	}
	printf_s("%s", word);
		

	


    return 0;
}

