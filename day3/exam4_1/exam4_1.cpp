// exam4_1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{

	int nKor, nEng, nMath;
	printf("국어 영어 수학 점수를 차례로 입력하시오:");
	scanf_s("%d %d %d", &nKor, &nEng, &nMath);

	//연산부분

	int nSum;
	double nNNN;
	nSum = nKor + nEng + nMath;
	//nNNN = (double)nSum / (double)3;
	nNNN = nSum / 3;

	//출력부분

	printf("----------");
	printf("----------");
	printf("----------");
	printf("----------");
	printf("----------");
	printf("--\n");
	printf("%7s", "이름");
	printf("%8s", "국어");
	printf("%8s", "영어");
	printf("%8s", "수학");
	printf("%8s", "총점");
	printf("%9s\n", "평균");
	printf("----------");
	printf("----------");
	printf("----------");
	printf("----------");
	printf("----------");
	printf("--\n");
	printf("%s", "홍길동");
	printf("%9d %7d %6d %6d %6.2lf\n", nKor, nEng, nMath, nSum, nNNN);
	printf("----------");
	printf("----------");
	printf("----------");
	printf("----------");
	printf("----------");
	printf("--\n");



	


    return 0;
}

