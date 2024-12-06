//Deniz Uzun
//Lab 7
#include <stdio.h>
#include <stdbool.h>

void printBoard(char board[26][26], int dimension) {

	printf("  ");
	int i, j;
	for (i = 0; i <dimension; i++) {
		char x[] = "abcdefghijklmnopqrstuvwxyz";
		printf("%c",x[i]);
	}
	printf("\n");

	for (i = 0; i < dimension; i++) {
		char x[] = "abcdefghijklmnopqrstuvwxyz";
		printf("%c", x[i]);
		printf(" ");
		for (j = 0; j < dimension; j++) {
			if (i == dimension / 2 - 1 && j == i || i == dimension / 2 && j == i) 
				printf("W");
			else if (i == dimension / 2 && j == dimension / 2 - 1 || i == dimension / 2 - 1 && j == dimension / 2) 
				printf("B");
			else
			printf("U");
		}
		printf("\n");
	}
}


bool positionInBounds(int dimension, int row, int col) {
	if (row >= 0 && row < dimension && col >= 0 && col < dimension)
		return (true);
	else
		return (false);
}



int main(void) {
	int dimension;
	int i, j;
	printf("Enter the board dimension: ");
	scanf("%d", &dimension);
	char x[] = "abcdefghijklmnopqrstuvwxyz";
	char array[26][26];
	printBoard(array[26][26], dimension);

	
	// Board Configuration
	printf("Enter board configuration:\n");
	char colour, row, col;
	const int t = 1;
	
	for (i = 0; i < dimension; i++) {
		for (j = 0; j < dimension; j++) {
			array[i][j] = 'U';
		}
	}
	
	while (t>0) {
	
		scanf(" %c", &colour);
		scanf(" %c", &row);
		scanf(" %c", &col);
		

		if (colour == '!' && row == '!' && col == '!')
			break;
		else
			array[row - 97][col - 97] = colour;
	}
	
	
	printf("  ");
	
	for (i = 0; i < dimension; i++) {
	
		printf("%c", x[i]);
	}
	printf("\n");

	for (i = 0; i < dimension; i++) {
		printf("%c", x[i]);
		printf(" ");
		for (j = 0; j < dimension; j++) {
			if (i == dimension / 2 - 1 && j == i || i == dimension / 2 && j == i) {
				array[i][j] = 'W';
				printf("%c", array[i][j]);
			}
			else if (i == dimension / 2 && j == dimension / 2 - 1 || i == dimension / 2 - 1 && j == dimension / 2)
			{
				array[i][j] = 'B';
				printf("%c", array[i][j]);
			}
			else
				printf("%c", array[i][j]);
		}
		printf("\n");
	}


	//available for W

	printf("Available moves for W:");
	for (int i = 0; i < dimension; i++) {
		for (int j = 0; j < dimension; j++) {
			for (int directionRow = -1; directionRow <= 1; directionRow++) {
				for (int directionCol = 1; directionCol >= -1; directionCol--) {
					int count = 1;
					if (array[i][j] == 'U') {	
						while (array[i + (count * directionRow)][j + (count * directionCol)] == 'B') {
							count++;
							if (array[i + (count * directionRow)][j + (count * directionCol)] == 'W')
								printf("\n%c%c", x[i], x[j]);	
						}	
					}
				}
			}
		}
	}

	
	//available for B
	
	printf("\nAvailable moves for B:");
	for (int i = 0; i < dimension; i++) {
		for (int j = 0; j < dimension; j++) {	
			for (int directionRow = -1; directionRow <= 1; directionRow++) {
				for (int directionCol = 1; directionCol >= -1; directionCol--) {
					int count = 1;
					if (array[i][j] == 'U') {
						while (array[i + (count * directionRow)][j + (count * directionCol)] == 'W') {
							count++;
							if (array[i + (count * directionRow)][(j + count * directionCol)] == 'B') 
								printf("\n%c%c", x[i], x[j]);	
						}
					}
				}
			}
		}
	}

	//Enter Move

	printf("\nEnter a move:\n");
	char r, c, color;
	int deltaRow=0, deltaCol=0;
	scanf(" %c", &color);
	scanf(" %c", &r);
	scanf(" %c", &c);
	r = r - 97;
	c = c - 97;
	
	if (positionInBounds(dimension, r, c)) {
		
		if (color == 'W') {
		
			for (int i = 0; i < dimension; i++) {
				for (int j = 0; j < dimension; j++) {
					for (int directionRow = -1; directionRow <= 1; directionRow++) {
						for (int directionCol = 1; directionCol >= -1; directionCol--) {
							int count = 1;
							if (array[i][j] == 'U') {
								while (array[i + (count * directionRow)][j + (count * directionCol)] == 'B') {
									count++;
									if (array[i + (count * directionRow)][j + (count * directionCol)] == 'W' && i==r && j==c) {
										for (int directionRow = -1; directionRow <= 1; directionRow++) {
											for (int directionCol = 1; directionCol >= -1; directionCol--) {
												int count = 1;
												if (array[r][c] == 'U') {
													while (array[r + (count * directionRow)][c + (count * directionCol)] == 'B') {
														array[r + (count * directionRow)][c + (count * directionCol)] = 'W';
														count++;

														if (array[r + (count * directionRow)][c + (count * directionCol)] == 'W')
															array[r][c] = 'W';
													}
												}
											}
										}
										printf("Valid move.\n");
										printf("  ");

										for (i = 0; i < dimension; i++) {
											printf("%c", x[i]);
										}
										printf("\n");
										for (i = 0; i < dimension; i++) {
											printf("%c", x[i]);
											printf(" ");
											for (j = 0; j < dimension; j++) {
												printf("%c", array[i][j]);
											}
											printf("\n");
										}
									
									}
									else {
										//Invalid
										printf("Invalid move.\n");
										printf("  ");

										for (i = 0; i < dimension; i++) {

											printf("%c", x[i]);
										}
										printf("\n");

										for (i = 0; i < dimension; i++) {
											printf("%c", x[i]);
											printf(" ");
											for (j = 0; j < dimension; j++) {
												if (i == dimension / 2 - 1 && j == i || i == dimension / 2 && j == i) {
													array[i][j] = 'W';
													printf("%c", array[i][j]);
												}
												else if (i == dimension / 2 && j == dimension / 2 - 1 || i == dimension / 2 - 1 && j == dimension / 2)
												{
													array[i][j] = 'B';
													printf("%c", array[i][j]);
												}
												else
													printf("%c", array[i][j]);
											}
											printf("\n");
										}
									}
									
								}
							}
						}
					}
				}
			}			
		}
		else if (color == 'B') {
			for (int i = 0; i < dimension; i++) {
				for (int j = 0; j < dimension; j++) {
					for (int directionRow = -1; directionRow <= 1; directionRow++) {
						for (int directionCol = 1; directionCol >= -1; directionCol--) {
							int count = 1;
							if (array[i][j] == 'U') {
								while (array[i + (count * directionRow)][j + (count * directionCol)] == 'W') {
									count++;
									if (array[i + (count * directionRow)][j + (count * directionCol)] == 'B' && i == r && j == c) {
										for (int directionRow = -1; directionRow <= 1; directionRow++) {
											for (int directionCol = 1; directionCol >= -1; directionCol--) {
												int count = 1;
												if (array[r][c] == 'U') {
													while (array[r + (count * directionRow)][c + (count * directionCol)] == 'W') {
														array[r + (count * directionRow)][c + (count * directionCol)] = 'B';
														count++;

														if (array[r + (count * directionRow)][c + (count * directionCol)] == 'B')
															array[r][c] = 'B';
													}
												}
											}
										}
										printf("Valid move.\n");
										printf("  ");

										for (i = 0; i < dimension; i++) {
											printf("%c", x[i]);
										}
										printf("\n");
										for (i = 0; i < dimension; i++) {
											printf("%c", x[i]);
											printf(" ");
											for (j = 0; j < dimension; j++) {
												printf("%c", array[i][j]);
											}
											printf("\n");
										}

									}
									else {
										//Invalid
										printf("Invalid move.\n");
										printf("  ");

										for (i = 0; i < dimension; i++) {

											printf("%c", x[i]);
										}
										printf("\n");

										for (i = 0; i < dimension; i++) {
											printf("%c", x[i]);
											printf(" ");
											for (j = 0; j < dimension; j++) {
												if (i == dimension / 2 - 1 && j == i || i == dimension / 2 && j == i) {
													array[i][j] = 'W';
													printf("%c", array[i][j]);
												}
												else if (i == dimension / 2 && j == dimension / 2 - 1 || i == dimension / 2 - 1 && j == dimension / 2)
												{
													array[i][j] = 'B';
													printf("%c", array[i][j]);
												}
												else
													printf("%c", array[i][j]);
											}
											printf("\n");
										}
									}

								}
							}
						}
					}
				}
			}
		}
		
		
	}
	else {
			//Invalid
			printf("Invalid move.\n");
			printf("  ");

			for (i = 0; i < dimension; i++) {

				printf("%c", x[i]);
			}
			printf("\n");

			for (i = 0; i < dimension; i++) {
				printf("%c", x[i]);
				printf(" ");
				for (j = 0; j < dimension; j++) {
					if (i == dimension / 2 - 1 && j == i || i == dimension / 2 && j == i) {
						array[i][j] = 'W';
						printf("%c", array[i][j]);
					}
					else if (i == dimension / 2 && j == dimension / 2 - 1 || i == dimension / 2 - 1 && j == dimension / 2)
					{
						array[i][j] = 'B';
						printf("%c", array[i][j]);
					}
					else
						printf("%c", array[i][j]);
				}
				printf("\n");
			}
	}
	return(0);
}

