// exam5.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

int g_nCounter = 0;

void g_nReset()
{
	g_nCounter = 0;
}

void count()
{
	printf_s("%d\n", g_nCounter++);
}

void decount()
{
	printf_s("%d\n", g_nCounter--);
}

int main()
{

	char szCmdBuf[32];
	while (1)
	{
		printf_s("명령어 >");
		gets_s(szCmdBuf, sizeof(szCmdBuf));
		if (strcmp(szCmdBuf, "quit") == 0) { // strcmp 비교함수. (a, b)가 같은지 비교.
			break;
		}
		else if (strcmp(szCmdBuf, "count") == 0) {
			count();
		}
		else if (strcmp(szCmdBuf, "decount") == 0) {
			decount();
		}
		else if (strcmp(szCmdBuf, "reset") == 0) {
			g_nReset();
		}
		else {
			printf_s("%s 는 처리할수 없는 명령어입니다.\n", szCmdBuf);
		}
	}

	printf_s("프로그램을 종료합니다!\n");
	return 0;
}

