#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c, d;
	int a_b, c_d, a_c, b_c, a_d, b_d;
	scanf ("%d%d%d%d", &a, &b, &c, &d);
	a_b = a + b;
	c_d = c + d;
	
	a_c = a + c;
	b_d = b + d;
	
	a_d = a + d;
	b_c = b + c;
	
	
	if (a_b > 100 || c_d > 100){
		printf("QwQ\n");
	} else {
		printf("pikapika\n");
	}
	if (a_c > 100 || b_d > 100){
		printf("QwQ\n");
	} else {
		printf("pikapika\n");
	}
	if (a_d > 100 || b_c > 100){
		printf("QwQ\n");
	} else {
		printf("pikapika\n");
	}
	
	return 0;
}
