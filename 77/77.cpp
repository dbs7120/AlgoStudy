// 77.친구인가?
// Union-Find

#include <stdio.h>
#include <vector>
using namespace std;
vector<int> p(1001);
int N, M;

int findSet(int x) {
	if (p[x] == x)
		return x;
	else return p[x] = findSet(p[x]);
}

void unionSet(int x, int y) {
	x = findSet(x);
	y = findSet(y);
	if (y != x) {
		p[x] = y;
	}
}

int main()
{
	scanf_s("%d %d", &N, &M);
	for (int i = 1; i <= N; i++) {
		p[i] = i;
	}

	for (int i = 0; i < M; i++) {
		int x, y;
		scanf_s("%d %d", &x, &y);
		unionSet(x, y);
	}
	int p1, p2;
	scanf_s("%d %d", &p1, &p2);
	if (findSet(p1) == findSet(p2))
		printf("YES\n");
	else
		printf("NO\n");

}

