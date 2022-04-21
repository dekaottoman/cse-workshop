#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LEN 16

char alphanumeric(int no) {
	char x;

	switch (no) {
	case 0: x = 'A';
		break;
	case 1: x = 'B';
		break;
	case 2: x = 'C';
		break;
	case 3: x = 'D';
		break;
	case 4: x = 'E';
		break;
	case 5: x = 'F';
		break;
	case 6: x = 'G';
		break;
	case 7: x = 'H';
		break;
	case 8: x = 'I';
		break;
	case 9: x = 'J';
		break;
	case 10: x = 'K';
		break;
	case 11: x = 'L';
		break;
	case 12: x = 'M';
		break;
	case 13: x = 'N';
		break;
	case 14: x = 'O';
		break;
	case 15: x = 'P';
		break;
	case 16: x = 'Q';
		break;
	case 17: x = 'R';
		break;
	case 18: x = 'S';
		break;
	case 19: x = 'T';
		break;
	case 20: x = 'U';
		break;
	case 21: x = 'V';
		break;
	case 22: x = 'W';
		break;
	case 23: x = 'X';
		break;
	case 24: x = 'Y';
		break;
	case 25: x = 'Z';
		break;
	case 26: x = 'a';
		break;
	case 27: x = 'b';
		break;
	case 28: x = 'c';
		break;
	case 29: x = 'd';
		break;
	case 30: x = 'e';
		break;
	case 31: x = 'f';
		break;
	case 32: x = 'g';
		break;
	case 33: x = 'h';
		break;
	case 34: x = 'i';
		break;
	case 35: x = 'j';
		break;
	case 36: x = 'k';
		break;
	case 37: x = 'l';
		break;
	case 38: x = 'm';
		break;
	case 39: x = 'n';
		break;
	case 40: x = 'o';
		break;
	case 41: x = 'p';
		break;
	case 42: x = 'q';
		break;
	case 43: x = 'r';
		break;
	case 44: x = 's';
		break;
	case 45: x = 't';
		break;
	case 46: x = 'u';
		break;
	case 47: x = 'v';
		break;
	case 48: x = 'w';
		break;
	case 49: x = 'x';
		break;
	case 50: x = 'y';
		break;
	case 51: x = 'z';
		break;
	case 52: x = '0';
		break;
	case 53: x = '1';
		break;
	case 54: x = '2';
		break;
	case 55: x = '3';
		break;
	case 56: x = '4';
		break;
	case 57: x = '5';
		break;
	case 58: x = '6';
		break;
	case 59: x = '7';
		break;
	case 60: x = '8';
		break;
	case 61: x = '9';
		break;
	}

	return x;
}

void string_gen(char code[]) {
	int i;
	srand(time(NULL));

	for (i = 0; i < LEN; i++) {
		code[i] = alphanumeric((rand() % 62));
	}
}

int main() {
	int i;
	char code[LEN];

	string_gen(code);

	for (i = 0; i < LEN; i++) {
		printf("%c", code[i]);
	}

	getch();
	exit(0);
}
