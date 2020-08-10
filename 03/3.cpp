//3. 진약수의 합
//수식출력시 규칙성파악
#include <iostream>
using namespace std;
int main()
{
	int N, i, sum = 1;
	cin >> N;
	cout << "1";				// 어떤 수든 1은 반드시 포함 ( "1 + "고정 )
	for (i = 2; i < N; i++)
	{
		if (N%i == 0)
		{
			cout << " + " << i;	// + a + b + c ..
			sum += i;
		}
	}
	cout << " = " << sum << endl;
	return 0;
}
