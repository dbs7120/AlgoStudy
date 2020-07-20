//5. 나이계산
//기준(2019년), 한국나이기준(+1)
//input: 780316-2376152	/	output: 42 W
//뒷자리첫번째 1,3 : M	/ 2,4 : W

#include <iostream>
#include <string>
using namespace std;
/*
int main()
{
	string str;
	int age;
	char s;
	getline(cin, str);
	age = stoi(str.substr(0, 2));
	if (age <= 20){
		age = 2020 - (age + 2000);
	}
	else
		age = 2020 - (age + 1900);

	switch (stoi(str.substr(7, 1)))
	{
	case 1:
		s = 'M';
		break;
	case 2:
		s = 'W';
		break;
	case 3:
		s = 'M';
		break;
	case 4:
		s = 'W';
		break;
	default:
		s = '?';
	}
	cout << age << " " << s << endl;
	return 0;
}
*/

#include <stdio.h>
int main()								// 강의방식
{
	freopen("input.txt", "rt", stdin);	
	char a[20];
	int year, age;
	scanf("%s", &a);

	if (a[7] == '1' || a[7] == '2') 
		year = 1900 + ((a[0]-48) * 10 + (a[1]-48));	// 문자 숫자의 아스키값 차이 감소 필요
	else		// 2000년생 이후
		year = 2000 + ((a[0] - 48) * 10 + (a[1] - 48));
	printf("%d\n", year);
	age = 2019 - year + 1;

	printf("%d ", age);

	if (a[7] == '1' || a[7] == '3')
		printf("M\n");
	else
		printf("W\n");
	return 0;
	
}