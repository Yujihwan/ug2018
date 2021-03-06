// exam11.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

const char *strpworld[32] = {
	"큰방 한가운데 작은 탁자가 놓여있고 북쪽과 서쪽 동쪽에 문이있다",
	"북쪽에 출구가 보인다. 그렇지만 무섭게 생긴 개가 지키고있다.",
	"작은 정원 같은 곳이다. 누군가 파티를 했던 흔적이 있다. 개가 좋아할만한 뼈다귀들이 보인다"

};
int g_nCurrentPos = 0;
int g_wayTable[32][4] = {
	{-1,2,-1,1},//동서남북
    {-1, -1, 0, -1},
    {-1,-1,-1,-1}
};
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
		else if(strcmp(szCmdBuf, "see")==0){
			printf_s("%s \n", strpworld[g_nCurrentPos]);
		}
		else if (strcmp(szCmdBuf, "move") == 0) {
			int nDir;
			printf_s("방향을 입력하세요 동서남북(0,1,2,3)->");
			scanf_s("%d", &nDir);
			int new_pos = g_wayTable[g_nCurrentPos][nDir];
			if (g_wayTable[g_nCurrentPos][nDir] == -1)
			{
				printf_s("갈수 없습니다\n");
			}
			printf_s("%s\n", strcmp(szCmdBuf, "see") == 0);
			else
			{
				printf_s("이동 합니다.\n");
				g_nCurrentPos = new_pos;
			}
		}
	}

	printf_s("프로그램을 종료합니다!\n");
	return 0;
}

