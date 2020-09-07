// 72.공주구하기 (조세퍼스, 큐로해결)

#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int n, k, i;
	queue<int> Q;
	scanf_s("%d %d", &n, &k);
	for (i = 1; i <= n; i++) {
		Q.push(i);
	}
	while (!Q.empty()) {
		for (i = 1; i < k; i++) {
			Q.push(Q.front()); // 앞사람 뒤로 넣기
			Q.pop();
		}
		Q.pop();
		if (Q.size() == 1) {
			printf("%d\n", Q.front());
			Q.pop();
		}
	}
}
