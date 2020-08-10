//2. 자연수의 합
// A부터 B까지의 합
#include <iostream>
using namespace std;
int main()
{
	int A, B, i, sum = 0;;
	cin >> A >> B;

	for (i = A; i < B; i++)
	{
		cout << i << " + ";
		sum += i;
	}
	cout << i << " = ";
	cout << sum + i << endl;
}