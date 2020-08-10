// 15. 소수의 개수(제한시간 1초)
// 2<=N<=200000


// 36 = 1 X 36
//		2 X 18
//		3 X 12
//		4 X 9
//		6 X 6
//		2,3,4,6 만 확인한다면 가능
//		j <= sqrt(36)
//		<=> j*j <= 36

#include <stdio.h>
#include <math.h>

int main()
{
	int n, i, j, flag, cnt = 0;
	scanf_s("%d", &n);
	for (i = 2; i <= n; i++) {
		flag = 1;
		//for (j = 2; j*j <= i; j++) {
		for (j = 2; j <= (int)sqrt(i); j++) {
			if (i%j == 0) {
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			cnt++;
	}

	printf("%d\n", cnt);

}


