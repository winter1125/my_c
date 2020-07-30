
#include <stdio.h>
#include <stdlib.h>
int main() {
	freopen("input.txt", "r", stdin);
	int num1;
	/*135 3
   293 1B
   415  1S1B
   235  2S
   FALL
   */

	char soc[4];  //135
	char dec[4];
	scanf("%s", soc); // 135
	scanf("%d", &num1);//3
	for (int i = 0; i < num1; i++) {
		int strike = 0;
		int ball = 0;

		scanf("%s", dec);
		for (int j = 0; j < 3; j++) {
			if (soc[j] == dec[j]) {
				strike++;
			}
			for (int k = 0; k < 3; k++) {
				if (j != k && soc[j] == dec[k]) {
					ball++;
				}
			}

		}

		if (strike == 0 && ball == 0) {
			printf("OUT\n");
			continue;
		}

	if (strike > 0) {
		printf("%dS", strike);
		if (strike == 3) {
			printf("\nSUCESS\n");
			return 1;
		}
	}
	if (ball > 0) { printf("%dB\n", ball); }
	//printf("\n");

}
printf("\nFAIL\n");

}
