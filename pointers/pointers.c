#include <stdio.h>

void swap(int *x, int *y) {
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}


int main() {
	int x = 7, y = 14;
	int *x_pointer = &x, *y_pointer = &y;
	
	swap(x_pointer, &y);

	printf("x >> %d\n", x);
	printf("y >> %d", y);
	exit(0);
}
