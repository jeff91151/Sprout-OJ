#include <stdio.h>
#include <string.h>
/*
	3 3 3
	101000101000000000101000101
	1 1 1
	9
	1
	1
	2
	2
	3
	5
	6
	4
	6
*/
int main(void){
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z); //1 1 1
	// padding 擴充 
    int matrix[x+2][y+2][z+2];

    for (int k = 0; k<z+2 ; k++){
		for (int j = 0; j<y+2; j++){
			for (int i = 0; i<x+2;i++){ // 0 ~ 2
				matrix[i][j][k] = 1; // 1 的話代表牆壁 
			}
		}
	}
	// 解決輸入 101000101000000000101000101 這整個，得用字串處理 
	int string_total = x*y*z;
	char input[string_total + 1];
	scanf("%s", input);
	int index = 0;
	for (int k = 1; k<z+1 ; k++){
		for (int j = 1; j<y+1; j++){
			for (int i = 1; i<x+1;i++){
				matrix[i][j][k] = input[index] - '0';
				index++;
			}
		}
	}
	// 確認有正確輸入進去 
//	for (int k = 1; k<z+1 ; k++){
//		for (int j = 1; j<y+1; j++){
//			for (int i = 1; i<x+1;i++){
//				printf("%d", matrix[i][j][k]);
//			}
//		}
//	}
	// initial
	int x_initial, y_initial, z_initial;
	scanf("%d %d %d", &x_initial, &y_initial, &z_initial);
	// move_total_step
	int total_step;
	scanf("%d", &total_step);
	// instruction_move
	int instruction;
	int x_current, y_current, z_current;
	x_current = x_initial+1; // 1 
	y_current = y_initial+1; // 1
	z_current = z_initial+1; // 1
	int x_next, y_next, z_next;
	for(int a = 0; a<total_step ;a++){
		scanf("%d", &instruction);
		switch(instruction){
			case 1:
			x_next = x_current+1;
			y_next = y_current;
			z_next = z_current;
			break;
			case 2:
			x_next = x_current - 1;
			y_next = y_current;
			z_next = z_current;
			break;
			case 3:
			x_next = x_current;
			y_next = y_current-1;
			z_next = z_current;
			break;
			case 4:
			x_next = x_current;
			y_next = y_current+1;
			z_next = z_current;
			break;
			case 5:
			x_next = x_current;
			y_next = y_current;
			z_next = z_current+1;
			break;
			case 6:
			x_next = x_current;
			y_next = y_current;
			z_next = z_current-1;
			break;
		}
		// 確認該格是否有牆 
//		printf("%d" , matrix[x_next][y_next][z_next]);
		if (matrix[x_next][y_next][z_next] == 1){
			//  hit the wall 代表要回到原位 
			printf("Ooops!!!\n");
			x_next = x_current;
			y_next = y_current;
			z_next = z_current;
		}
		x_current = x_next;
		y_current = y_next;
		z_current = z_next;
		
	}
	printf("%d %d %d\n", x_current-1, y_current-1, z_current-1);
	
	return 0;
}
