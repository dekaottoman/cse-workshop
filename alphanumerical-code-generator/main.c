#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define STRLEN 17

char random_char(int index) {
	char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	return charset[index];
}

int main() {
	srand(time(NULL));
	char str[STRLEN];
	int i, index;

	for (i = 0; i < STRLEN - 1; i++) {
		index = rand() % 62;
		str[i] = random_char(index);
	}
	str[i] = '\0';
	printf("%s", str);
	exit(0);
}