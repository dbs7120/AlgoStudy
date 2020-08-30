// 24.Jolly Jumpers
// 백준 점프는 즐거워

#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int N, pre, now, pos;

	scanf_s("%d", &N);

	vector <int> check(N);

	scanf_s("%d", &pre);

	for (int i = 1; i < N; i++) {
		scanf_s("%d", &now);
		pos = abs(pre - now);
		if (pos > 0 && pos < N && check[pos] == 0)
			check[pos] = 1;
		else {
			printf("NO\n");
			return 0;
		}
		pre = now;
	}
	printf("YES\n");
	return 0;
}

