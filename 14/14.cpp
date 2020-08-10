// 14. 뒤집은 소수
//

#include <iostream>

// 숫자뒤집기
// x 3700	tmp = 0 res = 0
// x 370	tmp = 0 res = 0*10 + 0
// x 37		tmp = 7 res = 0*10 + 0*10 + 0
// x 3		tmp = 3	res = 0*10 + 0*10 + 0*10 7*10 + 3

int reverse(int x) {
	int tmp, res = 0;
	while (x > 0) {
		tmp = x % 10;
		res = res * 10 + tmp;
		x = x / 10;
	}
	return res;
}

// 소수찾기
bool isPrime(int x) {
	int i;
	bool flag = true;
	if (x == 1)		// 1일경우 (뒤집기전 100 일때)
		return false;
	for (i = 2; i < x; i++) {
		if (x % i == 0) {	// 자신까지 나눈 나머지가 존재할경우(약수존재) => 소수아님
			flag = false;
			break;
		}
	}
	return flag;
}

int main()
{
	int n, num, i, tmp;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf_s("%d", &num);
		tmp = reverse(num);
		if (isPrime(tmp))
			printf("%d ", tmp);

	}


	return 0;
}
