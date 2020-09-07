// 65.미로탐색(DFS)
//

#include <stdio.h>
int map[7][7];
bool visited[7][7];
int dy[4] = { -1,1,0,0 };
int dx[4] = { 0,0,-1,1 };
int result = 0;
void DFS(int y, int x) {
	if (y == 6 && x == 6) {
		result++;
		return;
	}
	for (int d = 0; d < 4; d++) {
		int ny = y + dy[d];
		int nx = x + dx[d];
		if (ny < 0 || nx < 0 || ny >= 7 || nx >= 7)
			continue;
		if (map[ny][nx] == 1)
			continue;
		if (visited[ny][nx])
			continue;
		visited[ny][nx] = true;
		DFS(ny, nx);
		visited[ny][nx] = false;
	}
}

int main()
{
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7; j++) {
			scanf_s("%d", &map[i][j]);
		}
	}

	DFS(0, 0);
	printf("%d\n", result / 2);
}

