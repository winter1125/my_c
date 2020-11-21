#include <stdio.h>

#define N 6
int main() {
	int i;
	int total = 0;
	char word[N + 1];
	struct Computer_subject {
		char subject[20];
		int score;
	}cs[] = { {"programming", 80 },
	{ "system_analysis", 90 },
	{"data bse", 80}, { "archiyecture", 90 },
	{ "network", 80 }, { "Internet", 90 } };

	for (i = 0; i < N; i++) {
		word[i] = cs[i].subject[i];
		total += cs[i].score;

	}

	word[i] = '\0';
	printf("%s %5.2f", word, (float)total / N);
	return 0;
}
