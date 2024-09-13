#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	int a, temp;
	int step = 0; // 加一個 算步驟  的variable 
	scanf ("%d", &x);
	temp = x;
	
	while(1){
		a = temp % 2;
		if (temp == 1){
			printf("%d", step);
			break;
		} else {
			if (a == 0){
				temp = temp / 2;
			} else{
				temp = temp*3 + 1;
			}
		}
		step++;
	}
	return 0;
}
