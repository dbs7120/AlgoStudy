// 60.합이 같은 부분집합(DFS : 아마존 인터뷰)

#include <stdio.h>

int n, arr[11], ch[11];
int total = 0;
bool flag = false;
void DFS(int L, int sum) {
	if (sum > (total / 2)) return; // 절반 체크
	if (flag == true) return;
	if (L == n + 1) {
		if (sum == (total - sum)) {
			flag = true;
		}
	}
	else {
		DFS(L + 1, sum + arr[L]);
		DFS(L + 1, sum);
	}
}

int main()
{
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf_s("%d", &arr[i]);
		total += arr[i];
	}

	DFS(1, 0);
	printf("%s\n", flag ? "YES" : "NO");
}

