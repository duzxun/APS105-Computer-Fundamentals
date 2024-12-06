#include <stdio.h>
#include <stdlib.h> //for RAND_MAX
#include <time.h> // for srand(time())

int main(void) {
	int rows, cols;
	double p;
	printf("Enter the number of rows: ");
	scanf_s("%d", &rows);
	printf("Enter the number of columns: ");
	scanf_s("%d", &cols);
	printf("Enter the probability p value: ");
	scanf_s("%lf", &p);

	int i, j;
	rows = rows + 2;
	cols = cols + 2;
	int size = rows * cols;
	
	double** A = (double**)malloc(rows * sizeof(double*));
	for (i = 0; i < rows; i++)
		A[i] = (double*)malloc(cols * sizeof(double));
	
	for (i = 0; i < rows; i++) {
		A[i] = (double*)malloc(sizeof(double) * rows);
	}
	
	//dashed lines
	for (j = 0; j < 2*(cols-2)-1; j++) {
		printf("-", j);
	}
	printf("\n");

	//table generator
	srand(time(NULL));
	double* pA;
	pA = &A[i][j];
		for (int i = 1; i < rows-1; i++) {
			for (int j = 1; j < cols-1; j++) {
				double r = rand();
				double randNumber = r / RAND_MAX;
				A[i][j] = randNumber;
				
				
				if (A[i][j] < p) {
					printf("* ", pA);
				}
				else {
					printf(". ", pA);
				}
				//printf("%lf", A[i][j]);
			}
			printf("\n");
		}

		//dashes again
		for (j = 0; j < 2 * (cols-2) - 1; j++) {
			printf("-", j);
		}
		printf("\n");

		//value table
		
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				if (i == 0 || j == 0 || i == rows-1 || j == cols-1) {
					A[i][j] = 1.1;
				}
			}
		}

		int count = 0;
	
		for (int i = 1; i < rows-1; i++) {
			for (int j = 1; j < cols-1; j++) {
				if (A[i][j] < p) {
					printf("* ");
				}
		
				else{
				
				if (A[i - 1][j - 1] < p) 
					count++;	
				if (A[i - 1][j] < p)
					count++;
				if (A[i - 1][j + 1] < p)
					count++;
				if (A[i][j - 1] < p)
					count++;
				if (A[i][j + 1] < p)
					count++;
				if (A[i + 1][j - 1] < p)
					count++;
				if (A[i + 1][j] < p)
					count++;
				if (A[i + 1][j + 1] < p) 
					count++;
					
				printf("%d ", count);
				}
				count = 0;
			}
			printf("\n");
		}

			//dashes again
			for (j = 0; j < 2 * (cols - 2) - 1; j++) {
				printf("-", j);
			}
			printf("\n");
		
			return 0;
		}
		



