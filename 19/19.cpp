// 19. 분노 유발자
//

#include <stdio.h>
#include <stdlib.h.>

//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int *arr = (int*)malloc(sizeof(int) * n);
//
//	int temp;
//	int result = 0;
//	int num;
//	for (int i = 0; i < n; i++) {
//		scanf_s("%d", &arr[i]);
//	}
//	bool check = false;
//	for (int i = 0; i < n - 1; i++) {
//		temp = arr[i];
//		for (int j = i; j < n - 1; j++) {
//			if (temp > arr[j + 1]) {
//				check = true;
//			}
//			else {
//				check = false;
//				break;
//			}
//		}
//		if (check) {
//			result++;
//		}
//	}
//
//	printf("%d\n", result);
//
//	free(arr);
//	return 0;
//}

// 뒷값부터 시작할시 추가 조건문 불필요
int main() {
	int n, max = -1, result = 0;
	scanf_s("%d", &n);

	int *arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}

	max = arr[n-1];
	for (int i = n - 2; i >= 0; i--) {
		if (arr[i] > max) {
			result++;
			max = arr[i];
		}
	}
	printf("%d\n", result);
}

