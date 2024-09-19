#include <stdio.h>

int main(void){
	int n, m;
	scanf("%d %d", &n, &m);
	
	int matrix[n][m];
	int i, j;
	int input;
	for (i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d", &input);
			matrix[i][j] = input;
		}
	}
	for(j=0; j<m ; j++){
		printf("%d", matrix[0][j]);
		for(i=1;i<n;i++){
			printf(" %d", matrix[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
