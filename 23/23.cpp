// 23.연속 부분 증가수열
//

#include <stdio.h>
#include <vector>

//std::vector <int> arr;
//
//int main()
//{
//	int N;
//	int result = 0, plus = 0;
//	int temp;
//	scanf_s("%d", &N);
//	for (int i = 0; i < N; i++) {
//		scanf_s("%d", &temp);
//		arr.push_back(temp);
//	}
//
//	// plus와 result 로 투포인팅
//	for (int i = 0; i < N - 1; i++) {
//		if (arr[i] <= arr[i + 1]) {
//			plus++;
//		}
//		else {
//			if (plus >= result) {
//				result = plus;
//			}
//			plus = 0;
//		}
//	}
//	if (plus >= result) {
//		result = plus;
//	}
//	printf("%d\n", ++result);
//}

// pre, now 투포인팅

int main() {
	int n, i, pre, now, cnt, max;
	scanf_s("%d", &n);
	scanf_s("%d", &pre);
	cnt = 1;
	max = 1;

	// pre, now 로 투포인팅
	for (i = 2; i <= n; i++) {
		scanf_s("%d", &now);
		if (now >= pre) {
			cnt++;
			if (cnt > max) {
				max = cnt;
			}
		}
		else {
			cnt = 1;
		}
		pre = now;
	}
	printf("%d\n", max);
}



