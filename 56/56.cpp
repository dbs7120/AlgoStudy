// 56. 재귀함수 분석
//

#include <stdio.h>
void recur(int x) {

	if (x == 0)	// 종료조건
		return;
	recur(x - 1);	// 재귀
	printf("%d ", x);	// task
}

int main() {
	int N;
	scanf_s("%d", &N);
	recur(N);
}