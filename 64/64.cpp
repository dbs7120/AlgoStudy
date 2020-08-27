// 64. 경로탐색(DFS)
// 방향그래프 경로갯수파악

#include <stdio.h>
int N, M;
int map[30][30];
bool visit[30];
int count = 0;

void DFS(int v) {
	if (v == N) {
		count++;
		return;
	}
	for (int i = 1; i <= N; i++) {
		if (map[v][i] == 1 && !visit[i])  {
			visit[i] = true;
			DFS(i);
			visit[i] = false;
		}
	}
	


}

int main()
{
	int start;
	int end;
	scanf_s("%d %d", &N, &M);
	for (int i = 1; i <= M; i++) {
		scanf_s("%d %d", &start, &end);
		map[start][end] = 1;
	}
	visit[1] = true;
	DFS(1);
	printf("%d\n", count);
}

