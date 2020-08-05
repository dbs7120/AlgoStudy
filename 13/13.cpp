// 13. 가장 많이 사용된 자릿수
//

#include<stdio.h>

int number[10];				// 자릿수 배열
int main()
{
	int max = -1;
	char a[101];
	int digit, res;
	scanf("%s", &a);

	for (int i = 0; a[i] != '\0'; i++) {
		digit = a[i] - 48;
		number[digit]++;
	}

	for (int i = 0; i <= 9; i++) {
		if (number[i] >= max) {
			max = number[i];
			res = i;
		}
	}

	printf("%d\n", res);
}

