#include <stdio.h>
#include <stdbool.h>

void display_table(char* board) {
	int i;
	for (i = 0; i < 9; i -= -1) {
		printf("%c ", board[i]);
		if ((i + 1) % 3 == 0) {
			printf("\n");
		}
	}
}

void insert(char turn, char* board) {
	int index;
	printf("Enter cell index (%c) >> ", turn);
	scanf_s("%d", &index);
	board[index - 1] = turn;
}

bool check_win(char* board) {
	bool win = false;

	//Row 1
	if (board[0] != '-') {
		if (board[0] == board[1]) {
			if (board[0] == board[2]) {
				win = true;
			}
		}
	}
	//Row 2
	if (board[3] != '-') {
		if (board[3] == board[4]) {
			if (board[3] == board[5]) {
				win = true;
			}
		}
	}
	//Row 3
	if (board[6] != '-') {
		if (board[6] == board[7]) {
			if (board[6] == board[8]) {
				win = true;
			}
		}
	}
	//Col 1
	if (board[0] != '-') {
		if (board[0] == board[3]) {
			if (board[0] == board[6]) {
				win = true;
			}
		}
	}
	//Col 2
	if (board[1] != '-') {
		if (board[1] == board[4]) {
			if (board[1] == board[7]) {
				win = true;
			}
		}
	}
	//Col 3
	if (board[2] != '-') {
		if (board[2] == board[5]) {
			if (board[2] == board[8]) {
				win = true;
			}
		}
	}
	//Axis 1
	if (board[0] != '-') {
		if (board[0] == board[4]) {
			if (board[0] == board[8]) {
				win = true;
			}
		}
	}
	//Axis 2
	if (board[2] != '-') {
		if (board[2] == board[4]) {
			if (board[2] == board[6]) {
				win = true;
			}
		}
	}
	
	return win;
}

bool check_draw(int turn_count) {
	if (turn_count < 9) {
		return false;
	}
	else {
		return true;
	}
}

void switch_turn(char* turn) {
	if (*turn == 'X') {
		*turn = 'O';
	}
	else if (*turn == 'O') {
		*turn = 'X';
	}
}


int main() {
	char board[9] = { '-', '-', '-', '-', '-', '-', '-', '-', '-' }, turn = 'X';
	int turn_count = 0;
	
	printf("WELCOME TO TIC TAC TOE !!!!!\n");

	while (true) {
		display_table(board);
		insert(turn, board);
		turn_count++;
		
		if (check_win(board)) {
			printf("PLAYER %c HAS WON!!!", turn);
			display_table(board);
			exit(0);
		}

		if (check_draw(turn_count)) {
			printf("DRAW!!!!!");
			exit(0);
		}

		switch_turn(&turn);
	}
}
