// 20.가위바위보
//

// 1: 가위 / 2: 바위 / 3: 보
#include <stdio.h>

int main() {
	int n, a[101], b[101];
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf_s("%d", &a[i]);
	}
	for (int i = 1; i <= n; i++) {
		scanf_s("%d", &b[i]);
	}
	for (int i = 1; i <= n; i++) {
		if (a[i] == b[i]) printf("D\n");
		else if (a[i] == 1 && b[i] == 3) printf("A\n");
		else if (a[i] == 2 && b[i] == 1) printf("A\n");
		else if (a[i] == 3 && b[i] == 2) printf("A\n");
		else printf("B\n");
	}

}

