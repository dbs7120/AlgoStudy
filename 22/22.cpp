// 22.온도의 최댓값 (제한시간 1초)
// 1차원 배열 구간합 (제한시간 1초)
//

// 0 1 2 3 4 5 6 7 8 9
// sum + a[i] - a[i-k]


#include <stdio.h>
#include <vector>

int main()
{
	int n, k, max = -2147000000;
	int sum = 0;
	scanf_s("%d %d", &n, &k);
	std::vector<int> a(n);	// 정수형 1차원 가변배열과 동일
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &a[i], sizeof(int));
	}

	//// 시간복잡도 O(n^2)
	//for (int i = 0; i < n - k; i++) {
	//	sum = 0;
	//	for (int j = i; j < i + k; j++) {
	//		sum += a[j];
	//	}
	//	if (sum > max)
	//		max = sum;
	//}

	// 첫구간은 따로
	for (int i = 0; i < k; i++) {
		sum += a[i];
	}
	max = sum;

	// 시간복잡도 O(n)
	for (int i = k; i < n; i++) {
		sum = sum + (a[i] - a[i - k]);
		if (sum > max)
			max = sum;
	}



	printf("%d\n", max);
}



