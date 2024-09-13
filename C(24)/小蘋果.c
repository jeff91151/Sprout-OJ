#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N;
	scanf("%d", &N);
	int food[N];
	int i;
	int total = 0;
	int average;
	int less_than_average = 0;
	// 存入 
	for (i=0;i<N;i++){
		scanf("%d", &food[i]);
	}
	// 總和
	for (i=0;i<N;i++){
		total = total + food[i];
	} 
	// 取平均
	average = total /  N;
	// 算小於平均的總和 
	for (i=0;i<N;i++){
		if (food[i] < average){
			less_than_average = less_than_average + food[i];
		}
	}
	// 印出來 
	printf("%d", less_than_average) ;
	
	
	return 0;
}
