// 16. Anagram

// a[26*2] => 소문자, 대문자
// 대문자: 65~90 => index 1~26
// 'A' - 64 = 1 (index)
// 소문자: 97~122 => index 27~52
// 'a' - 70 = 27 (index)

int a[53];
int b[53];
#include <stdio.h>


int main()
{
	char str1[100];
	char str2[100];
	scanf_s("%s", &str1, sizeof(str1));
	scanf_s("%s", &str2, sizeof(str2));
	for (int i = 0; str1[i] != '\0'; i++) {
		if (65 <= str1[i] && str1[i] <= 90)
			a[str1[i] - 64]++;
		else
			a[str1[i] - 70]++;
	}
	for (int i = 0; str2[i] != '\0'; i++) {
		if (65 <= str2[i] && str2[i] <= 90)
			b[str2[i] - 64]++;
		else
			b[str2[i] - 70]++;
	}
	bool check = true;
	for (int i = 0; i < 52; i++) {
		if (a[i] == b[i])
			continue;
		else {
			check = false;
			break;
		}
	}
	if (check) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}

}
