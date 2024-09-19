#include <stdio.h>

int main(void){
	int m, n;
	scanf("%d %d", &m, &n);
	
	int matrix[m][n];
	int i, j;
	int input;
	for (i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d", &input);
			matrix[i][j] = input;
		}
	}
	int c;
	scanf("%d", &c);
	int row, column; // record 那個數字的行列 
	for (i=0;i<m;i++){
		for(j=0;j<n;j++){
			if (matrix[i][j] == c){
				row = i;
				column = j; 
			}
		}
	}
//	printf("row: %d  column: %d\n", row, column);
	int temp =0;
	// 先看固定 row 誰大 
	for (i=0;i<n;i++){
		if (matrix[row][i] != c && matrix[row][i] > c && matrix[row][i] > temp){
			temp = matrix[row][i];
		} else if (matrix[row][i] != c && matrix[row][i] < c && matrix[row][i] > temp){
			temp = matrix[row][i];
		}
	}
	// 再看固定 column 誰大 
	for (i=0;i<m;i++){
		if (matrix[i][column] != c && matrix[i][column] > c && matrix[i][column] > temp){
			temp = matrix[i][column];
		} else if (matrix[i][column] != c && matrix[i][column] < c && matrix[i][column] > temp){
			temp = matrix[i][column];
		}
	}
	printf("%d\n", temp);
	return 0;
}
