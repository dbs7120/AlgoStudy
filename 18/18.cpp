// 18. 층간소음
//

#include <stdio.h>

int main()
{
	int N, M;
	scanf_s("%d %d", &N, &M);
	int max = 0;
	int temp = 0;
	int input;

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &input);
		if (input > M) {
			temp++;
			if (max < temp)
				max = temp;
		}		
		else 		
			temp = 0;			
		

	}
	if(max==0)
		printf("-1");
	else
		printf("\n%d\n", max);
}

