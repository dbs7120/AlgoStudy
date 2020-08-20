// 57.재귀함수 이진수 출력
//

#include <stdio.h>

void recur(int x) {
	if (x == 0) return;
	else {		
		recur(x / 2); // 호출 및 출력 순서 주의
		printf("%d", x % 2);
	}
}

int main()
{
	int num;
	scanf_s("%d", &num);
	recur(num);
	printf("\n");
}


