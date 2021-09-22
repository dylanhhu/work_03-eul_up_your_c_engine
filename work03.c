#include <stdio.h>

int problem_1() {
	int tally = 0;

	int i = 0;
	for (i; i < 1000; i++) {
		if (i % 5 == 0 || i % 3 == 0) {
			tally += i;
		}
	}

	return tally;
}

int main() {
	int p1_result = problem_1();
	printf("Problem 1: %d", p1_result);

	//

	printf("\n");
	return 0;
}
