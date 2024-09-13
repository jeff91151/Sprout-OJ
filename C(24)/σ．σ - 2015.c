#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// 6 
// 1 2 0 5 3 4 
int main(int argc, char *argv[]) {
	
	int N;
	// 6 
	scanf("%d", &N);
	int in[N];
	int i;
	int out[N];
	// 建立索引 
	// ex. 1 2 0 5 3 4 
	for (i = 0; i<N;i++){
		scanf("%d", &in[i]);
	}
	for (i = 0; i<N;i++){
		out[i] = in[in[i]];
	}
	for (i = 0; i<N;i++){
		printf("%d\n", out[i]);
	}
	
	return 0;
}
