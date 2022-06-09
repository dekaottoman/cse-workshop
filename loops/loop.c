#include <stdio.h>
#define SENTINEL -999

int factorial(int x) {
	int i, fact = 1;
	for (i = 1; i <= x; i++) {
		fact *= i;
	}
	return fact;
}

int main() {
	int grade = 0, n = 0, total = 0;

	while (grade != SENTINEL) {
		printf("Enter Grade >>");
		scanf_s("%d", &grade);

		if (grade != SENTINEL) {
			total += grade;
			n++;
		}
	}

	printf("Average >> %d", (total / n));

	printf("%d factorial >> %d", 5, factorial(5));

	exit(0);
}
