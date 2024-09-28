#include <stdio.h>
/*
	5
	1 2 3 4 5
	16 17 18 19 6
	15 24 25 20 7
	14 23 22 21 8
	13 12 11 10 9
*/
int main(void){
	
	int N;
	scanf("%d", &N);
	int input[N*N];
	int Total = N;
	// ex. 1~25
	for (int i = 0;i< N*N; i++){
		input[i] = i+1;
	}
	
	// test input 
//	for (int i = 0 ; i< N*N ; i++){
//		printf("%d", input[i]);
//	}

	int matrix[N][N];
	

	// initial 最上層的 row 先印製 
	int num = 0;
	int i;
	for(i = 0; i < N ;i++){ // 0 1 2 3 4
		matrix[0][i] = input[num];
		num++;
	}
	int initial_column = num-1; // column ; num 會跑到5, 故 -1 
	int initial_row = 0; // row
//	printf("%d\n", matrix[initial_row][initial_column]);
	int state = 0;
	int next_state; 
	int current_column = initial_column;
 	int current_row = initial_row;
 	N--; // N = 4 
	while(N>0){
		
		for (i = 0; i<N;i++){
			switch (state){
			case 0:
				current_row++;
				break;
			case 1:
				current_column--;
				break;
			case 2:
				current_row--;
				break;
			case 3:
				current_column++;
				break;
		}
//			printf("%d", current_row);
			matrix[current_row][current_column] = input[num];
//			printf("%d\n", matrix[current_row][current_column]);
//			printf("%d", input[num]);
			num++;
			
		}
		state++; // state = 1
		if (state == 4){
			next_state = 0;
			state = next_state;
		}
		
		for (i = 0; i<N;i++){
			switch (state){
			case 0:
				current_row++;
				break;
			case 1:
				current_column--;
				break;
			case 2:
				current_row--;
				break;
			case 3:
				current_column++;
				break;
		}
			matrix[current_row][current_column] = input[num];
//			printf("%d\n", matrix[current_row][current_column]);
			num++;
		}
		state++; // state = 2
		if (state == 4){
			next_state = 0;
			state = next_state;
		}
		
		
		N--;
	}
	
	for (i=0;i<Total;i++){
		printf("%d", matrix[i][0]);
		for(int j=1;j<Total;j++){
			printf(" %d", matrix[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
