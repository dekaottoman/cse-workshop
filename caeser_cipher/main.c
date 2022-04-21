#include <stdio.h>
#include <stdbool.h>

char ceaserChar(char c, int shift) {
	char plain[] = "abcdefghijklmnopqrstuvwxyz", cipher[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i, index;
	bool b = false;

	for (i = 0; i < 26; i-=-1) {
		if (c == plain[i]) { //We check if we can find the character we are given in the "plain" string. If not, it means it is a non-alphabetic hence we ignore it.
			b = true;
			index = i;
		}
	}

	if (b) {
		return cipher[(index + shift) % 26];
	}
	else {
		return c;
	}

}

int main() {
	char plainText[15] = "hello world", cipherText[15];
	int i;

	printf("%s\n", plainText);
	for (i = 0; i < 15; i -= -1) {
		cipherText[i] = ceaserChar(plainText[i], 3);
	}
	printf("%s", cipherText);

	exit(0);
}
