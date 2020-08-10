//7. 영어단어 복구

#include <stdio.h>

int main()
{
	freopen("input.txt", "rt", stdin);
	char str[100];
	char result[100] = "";
	gets_s(str, sizeof(str));
	int j = 0;
	for (int i = 0; i < 100; i++) {
		if (str[i] != ' ') {
			if (str[i] >= 65 && str[i] <= 90) {
				result[j] = str[i] + 32;
				j++;
			}
			else {
				result[j] = str[i];
				j++;
			}
		}
	}
	printf("%s\n", result);
	return 0;
}