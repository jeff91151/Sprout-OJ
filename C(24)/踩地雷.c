#include <stdio.h>

int main(void){
	int m, n;
	scanf("%d %d", &n, &m);
//	Test
//	3 3
//	0 0 1
//	1 0 1
//	1 0 1
	int matrix[n][m];
	int i, j;
	int input;
	for (i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d", &matrix[i][j]);
		}
	}
	int total_bomb[n][m]={0}; // 地雷數 
	for (i=0;i<n;i++){
		for(j=0;j<m;j++){
			// 先判斷角落:
			//左上 左下 右下 右上 
			if (i == 0 && j == 0){
				total_bomb[i][j] = matrix[i][j+1] + matrix[i+1][j] + matrix[i+1][j+1];
			} else if (i == n-1 && j == 0){
				total_bomb[i][j] = matrix[i-1][j] + matrix[i][j+1] + matrix[i-1][j+1];
			} else if (i == n-1 && j == m-1){
				total_bomb[i][j] = matrix[i-1][j] + matrix[i][j-1] + matrix[i-1][j-1];
			} else if (i == 0 && j == m-1){
				total_bomb[i][j] = matrix[i][j-1] + matrix[i+1][j] + matrix[i+1][j-1];
			} else if (i==0){
				total_bomb[i][j] = matrix[i][j-1] + matrix[i+1][j] + matrix[i][j+1] + matrix[i+1][j-1] + matrix[i+1][j+1];
			} else if (i == n - 1){
				total_bomb[i][j] = matrix[i][j-1] + matrix[i-1][j] + matrix[i][j+1] + matrix[i-1][j-1] + matrix[i-1][j+1];
			} else if (j == 0){
				total_bomb[i][j] = matrix[i-1][j] + matrix[i+1][j] + matrix[i][j+1] + matrix[i-1][j+1] + matrix[i+1][j+1];
			} else if ( j == m-1){
				total_bomb[i][j] = matrix[i-1][j] + matrix[i+1][j] + matrix[i][j-1] + matrix[i-1][j-1] + matrix[i+1][j-1];
			} else {
				total_bomb[i][j] = matrix[i][j-1] + matrix[i][j+1] + matrix[i+1][j] + matrix[i-1][j] + matrix[i-1][j-1] + matrix[i+1][j-1] + matrix[i-1][j+1] + matrix[i+1][j+1];
			}
			
		}
	}
	
	for (i=0;i<n;i++){
		printf("%d", total_bomb[i][0]);
		for(j=1;j<m;j++){
			printf(" %d", total_bomb[i][j]);
			
		}
		printf("\n");
	}
	return 0;
}
