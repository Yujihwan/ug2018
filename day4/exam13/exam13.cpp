// exam13.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{

	char word[32]; //32글자까지 입력받음
	scanf_s("%s", word, sizeof(word));
	int i, j = 0;
	int p = sizeof(word) / sizeof(word[0]); //p는 글자수
	int index = 0;

	for (int i = 0; i < p; i++) {
		if (word[i] == 0x00) break;
		index++;
	}


	printf_s("%d\n", index);
	int nFSM = 0; //0->normal, 1-> star
	for (int i = 0; i < index; i++)
	{
		if (nFSM == 0) {
			if (word[i] == '@') nFSM = 1;
			printf_s("%c", word[i]);
			
		}
		else if (nFSM == 1) {
			if (word[i] == '@') nFSM = 0;
			if (nFSM == 1) {
				printf_s("*");
			}
			else if (nFSM == 0)
			{
				printf_s("%c", word[i]);

			}
			
		}
		
	}

	printf_s("\n");


    return 0;
}

