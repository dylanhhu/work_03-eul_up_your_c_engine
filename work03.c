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

int problem_6() {
	int sum_squares = 0;
	int i = 0;
	for (i; i < 100; i++) {
		sum_squares += i * i;
	}

	int squared_sum = (100 * (101)) / 2;
	squared_sum *= squared_sum;

	return squared_sum - sum_squares;
}

int main() {
	int p1_result = problem_1();
	printf("Problem 1: %d", p1_result);

	int p6_result = problem_6();
	printf("Problem 6: %d", p6_result);

	printf("\n");
	return 0;
}
