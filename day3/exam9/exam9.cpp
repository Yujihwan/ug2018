// exam9.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{

	int a, b;
	char _op;
	int nSolve;


	scanf_s("%d %d\n", &a, &b);
	scanf_s("%c", &_op, sizeof(_op));

	switch(_op) {
	case '+':
		nSolve = a + b;
		break;
	case '-':
		nSolve = a - b;
	    break;
	case '*':
		nSolve = a * b;
		break;
	case '%':
		nSolve = a % b;
		break;
	default:
		break;
	}



    return 0;
}

