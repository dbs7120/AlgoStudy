// 61.특정 수 만들기(DFS완탐)
//


#include <stdio.h>
#include <vector>
int N, M;
int input[11];
int count = 0;
bool check = false;

void DFS(int L, int val) {
	if (L == N + 1) { // 종료지점
		if (val == M)
			count++;
	}
	else {
		DFS(L + 1, val + input[L]); // 더하는 경우
		DFS(L + 1, val - input[L]); // 뺴는 경우
		DFS(L + 1, val); // 그대로인경우
	}
}


int main(void) {
	scanf_s("%d", &N);
	scanf_s("%d", &M);
	for (int i = 1; i <= N; i++) {
		scanf_s("%d", &input[i]);
	}

	DFS(1, 0);

	if (count != 0)
		printf("%d\n", count);
	else
		printf("-1");
	return 0;

}

