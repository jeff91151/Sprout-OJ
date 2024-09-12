#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int d, w;
	
	scanf("%d%d", &d, &w); // 分別為 幾號 與 星期幾 
	
	if ( d > 31 || w > 7){
		printf ("= =\n");
	} else {
		if ( d == 13 && w == 5){
			printf ("._.zZ\n");
		} else if (d == 13){
			printf ("QAQ\n");
		} else {
			printf ("Oh,AC!\n");
		}
	}
	
	return 0;
}
