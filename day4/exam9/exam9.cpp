// exam9.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{

	char word[32]; //32글자까지 입력받음
	scanf_s("%s", word, sizeof(word));

	int i,j=0;
	int p  = sizeof(word) / sizeof(word[0]); //p는 글자수
		for(int i=0; i < p; i++){
			if (word[i] == NULL/*0x00*/) {
			break;
		}
		j++;
	}

	printf_s("입력한 문자열은: %s 길이는 %d \n", word,j );



    return 0;
}

