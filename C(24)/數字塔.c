#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i, j, k, x, y;
	int a;
	// a = 5;
	scanf("%d", &a);
	
	for (i = 1 ; i <= a; i++){
		// 印空格 (左半邊)
		for (k = a ; k > i ; k--){
			printf (" ");
		}
		
		// 印數字 (右半邊) 
		for (j = 1; j <= i; j++){
			printf("%d", i);
		}
		
		// 空格
		printf(" ");
		
		for (x = 1; x <= i; x++){
			printf ("%d", i);
		}
		
		 
		// 數字結束換行 
		printf("\n");
	}
	
	
	

	return 0;
}
