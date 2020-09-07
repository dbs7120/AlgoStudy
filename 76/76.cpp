// 76. 이항계수(메모이제이션)
// 5C3 = 4C2 + 4C3


#include <stdio.h>
long long dp[30][30];
long long DFS(int n, int r) {
	if (n == r || r == 0) return 1;
	if (dp[n][r] > 0)
		return dp[n][r];
	else return dp[n][r] = DFS(n - 1, r - 1) + DFS(n - 1, r);
}

int main()
{
	int n, r;
	scanf_s("%d", &n);
	scanf_s("%d", &r);
	printf("%d\n", DFS(n, r));

}

