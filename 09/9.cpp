//9. 모두의 약수

#include <stdio.h>

int cnt[50001];

// 1의배수 모두 증가
// 2의배수 모두 증가
// 3의배수 모두 증가
// 4의배수 모두 증가
// ...
// N범위 안의 각 값 배수 모두 증가를 시켜놓기

int main(){
	int N;
	scanf_s("%d", &N, sizeof(N));

	for (int i = 1; i <= N; i++) {
		for (int j = i; j <= N; j=j+i) {			
			cnt[j]++;
		}		
	}

	for (int i = 1; i <= N; i++) {
		printf("%d ", cnt[i]);
	}
	printf("\n");

}
