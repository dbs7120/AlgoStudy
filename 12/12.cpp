//12. 숫자의 총 개수(large)
//

// 1 X 9 = 9
// 2 X 90 = 180
// 3 X 900
// 4 X 900

// 1~256 => 256-99 = 157

#include <stdio.h>

int main()
{
	int n, sum = 0, c = 1, d = 9, res=0;
	scanf_s("%d", &n);

	while (sum + d < n) {
		res = res + (c*d);
		sum = sum + d;
		c++;		// 다음 자릿수
		d = d * 10;	// 다음 자릿수의 숫자 개수
	}
	res = res + ((n - sum)*c);
	printf("%d\n", res);
}

// n = 256
// sum		d		c		res
// 0		+9		*1		9
// 9		+90		*2		189		//n을넘지않는 나머지
// 99		+900	*3		2700	X (break)

// 루프결과 + (n - sum(남은값) * 현재 자릿수)
// 256 - 99 = 157
// 157 * 3	= 471
// 471 + 189 = 660


