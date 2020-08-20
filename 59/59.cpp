// 59.부분집합(DFS)
// 깊이 (level) 방문 컨트롤
// 이진트리 방식
// 좌측이동 ch[L] = 1, 우측이동 ch[L] = 0
// 결과 ch[] 값이 1인 배열의 인덱스출력
// 총 부분집합 갯수 : 2^n

#include <stdio.h>
int n, ch[11];
void DFS(int L) {
	if (L == n + 1) {
		for (int i = 1; i <= n; i++) {
			if (ch[i] == 1)
				printf("%d ", i);
		}
		printf("\n");
		return;
	}
	else {
		ch[L] = 1;
		DFS(L + 1);
		ch[L] = 0;
		DFS(L + 1);
	}
}

int main()
{
	scanf_s("%d", &n);
	DFS(1);
}

