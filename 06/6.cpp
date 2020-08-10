//6. 숫자추출

#include <stdio.h>
#include <string>

/*
int main()
{
	//freopen("input.txt", "rt", stdin);
	char str[50];
	char substr[9] = "";
	int num = 0, count = 0;;
	scanf("%s", &str);
	int j = 0;
	for (int i = 0; i < 50; i++) {
		if ((str[i] - 48) >= 0 && (str[i] - 48) <= 9) {
			substr[j] = str[i];
			j++;
		}
	}
	num = atoi(substr);
	printf("%d\n", num);
	for (int i = 1; i <= num; i++) {
		if (num%i == 0)
			count++;
	}
	printf("%d\n", count);
	return 0;
}
*/

/*
 0 2 8
 res	=	res * 10	+ a[i]
 0		=	0 * 10		+ 0
 2		=	0 * 10		+ 2
 28		=	2 * 10		+ 8
*/

int main()		// 강의방식
{
	freopen("input.txt", "rt", stdin);
	char a[100];
	int res = 0, cnt = 0, i;
	scanf("%s", &a);
	for (i = 0; a[i] != '\0'; i++) {		// \0 문자열의 끝 (Null문자)
		if (a[i] >= 48 && a[i] <= 57) {
			res = res * 10 + (a[i] - 48);
		}
	}
	printf("%d\n", res);
	for (int i = 1; i <= res; i++) {
		if (res%i == 0) cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}