// 78.원더랜드(크루스칼 MST)
// 간선의 가중치 기준 정렬 필요
// Union&Find 활용
// 방문체크를 통하여 순환되는 연결이 되지않게 구현

#include <stdio.h>
#include <algorithm>

#include <vector>
using namespace std;
int v, e;
int p[10001];

struct Edge {
	int v1; // 정점1
	int v2; // 정점2
	int val; // 가중치
	Edge(int a, int b, int c) { // 생성자
		v1 = a;
		v2 = b;
		val = c;
	}
	bool operator <(Edge &b) { // 연산자 오버로딩
		return val < b.val; // 정렬기준 내림차순
	}
};

int findSet(int x) {
	if (x == p[x])
		return x;
	else return p[x] = findSet(p[x]);
}

void uniosSet(int x, int y) {
	x = findSet(x);
	y = findSet(y);
	if (x != y) {
		p[x] = y;
	}
}

int main() {
	vector<Edge> Ed;
	scanf_s("%d %d", &v, &e);
	for (int i = 1; i <= v; i++) {
		p[i] = i;
	}
	int a, b, c, result = 0;
	for (int i = 1; i <= e; i++) {
		scanf_s("%d %d %d", &a, &b, &c);
		Ed.push_back(Edge(a, b, c));
		sort(Ed.begin(), Ed.end());
	}
	for (int i = 0; i < e; i++) {
		int fa = findSet(Ed[i].v1);
		int fb = findSet(Ed[i].v2);
		if (fa != fb) {
			result += Ed[i].val;
			uniosSet(Ed[i].v1, Ed[i].v2);
		}
	}
	printf("%d\n", result);
	return 0;
}

