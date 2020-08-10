//8. 올바른 괄호

#include <stdio.h>

int main() {
	char str[30] = "";
	int cnt = 0;
	scanf_s("%s", str, sizeof(str));
	for (int i = 0; i < str[i] != '\0'; i++) {
		if (str[i] == '(')
			cnt++;
		else if (str[i] == ')')
			cnt--;
		if (cnt < 0)	
			break;
	}
	if (cnt == 0)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;

}