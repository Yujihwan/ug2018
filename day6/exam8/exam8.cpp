// exam8.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
double aryap(double *ap, int nLength)
{
	double _ary = -9999999; //최댓값구하기 - 초기값을 미니멈으로 넣는다.
	for (int i = 0; i < nLength; i++) {
		if (_ary < ap[i]) {
			_ary = ap[i];
		}
	}
	return _ary;
}




int main()
{
	double ary[] = { 1.5, 20.1, 16.4, 2.3, 3.5, 100, 203};
	printf_s("%lf %d\n", aryap(ary, sizeof(ary)/sizeof(double))); //nLength의 값을 ary의 길이로 맞춤.

    return 0;
}

