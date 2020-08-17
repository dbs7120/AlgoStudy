// 21.카드게임
//
// A score, Bscore 비교
// 점수가 같을때 마지막라운드가 이긴사람이 최종이김(추가 변수로 저장)


#include <stdio.h>

int main()
{
	int input1[10];
	int input2[10];
	int winA = 0, winB = 0;
	int lw = 0;	// last win

	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &input1[i]);
	}

	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &input2[i]);
	}

	for (int i = 0; i < 10; i++) {
		if (input1[i] > input2[i]) { // A win
			winA += 3;
			lw = 1;
		}
		else if (input1[i] < input2[i]) { // B win
			winB += 3;
			lw = 2;
		}
		else {
			winA++;
			winB++;
		}
	}
	printf("%d %d\n", winA, winB);
	if (lw == 1) // winA
		printf("A\n");
	else if (lw == 2) // winB
		printf("B\n");
	else // lw==0 
		printf("D\n");

	return 0;

}
