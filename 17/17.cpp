// 17. 선생님 퀴즈
//

#include <stdio.h>

int main()
{
	int t, n, result, sum;
	scanf_s("%d", &t);
	for (int i = 1; i <= t; i++) {
		scanf_s("%d", &n);
		scanf_s("%d", &result);
		sum = 0;
		for (int i = 1; i <= n; i++) {
			sum += i;
		}
		printf("%s\n", sum == result ? "YES" : "NO");
	}

}

