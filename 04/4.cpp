//4. 나이차이
//N명입력 최대 나이차이 출력
#include <iostream>
using namespace std;
/*
int main()							// my
{
	int N, i, j, temp, result = 0;
	cin >> N;
	int *input = new int[N];		// 동적할당
	for (i = 0; i < N; i++)
	{
		cin >> input[i];
	}

	for (j = 0; j < N; j++)			// 정렬
	{
		for (i = 0; i < N - 1; i++)
		{
			if (input[i] > input[i + 1])
			{
				temp = input[i + 1];
				input[i + 1] = input[i];
				input[i] = temp;
			}
		}
	}

	result = input[N - 1] - input[0];	// 최대최소차이
	cout << result << endl;
	return 0;
}
*/

int main()								// 강의방식
{
	freopen("input.txt", "rt", stdin);	// 파일입출력활용
	int n, i, a, max = -2147000000, min = 2147000000;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> a;
		if (a > max) max = a;
		if (a < min) min = a;
	}
	cout << max - min << endl;
	return 0;
}