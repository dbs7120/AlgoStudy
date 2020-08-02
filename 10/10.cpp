//10. 자릿수의 합

#include <stdio.h>

int digit_sum(int);

int main()
{
	int N, max = -1, result = 0, input;
	scanf_s("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &input);
		if (max < digit_sum(input)) {
			max = digit_sum(input);
			result = input;
		}
		else if (max == digit_sum(input)) {
			if (result < input) {
				result = input;
			}
		}

	}

	printf("%d", result);

}

// 125 
// 125%10 = 5
// 125/10 = 12
// 12%10 = 2
// 12/10 = 1
// 1%10 = 1
// 1/10 = 0


int digit_sum(int x) {
	int temp = x;
	int sum = 0;
	while (temp != 0) {
		sum = sum + temp % 10;
		temp = temp / 10;
	}
	return sum;
}
