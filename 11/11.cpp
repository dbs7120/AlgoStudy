//11. 숫자의 총 개수(small)
//

#include <stdio.h>

int main() {
	int N;
	scanf_s("%d", &N);

	int count = 0;
	for (int i = 1; i <= N; i++) {

		count++;
		if (i >= 10) {
			count++;
			if (i >= 100) {
				count++;
				if (i >= 1000) {
					count++;
					if (i >= 10000) {
						count++;
						if (i >= 100000) {
							count++;


						}
					}

				}
			}
		}

	}
	printf("%d\n", count);

}

/*
// 강의방식(임시변수, 몫 활용)
cnt=0, tmp;
for(i=1;i<=N;i++){
	tmp = i;
	while(tmp>0){
		tmp=tmp/10;
		cnt++;
	}
}
print(cnt)
*/

