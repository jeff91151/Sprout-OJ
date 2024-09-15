#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// test
	// string length
	// 3 3
	// 1 <= |f|, |l| < 100
	// 1 <= m <= |f|, 1<= n <= |l|
	// output: strlen
	char src[200];
	char f[100];
	char l[100];
	int i = 0;
	int j = 0;
	char z = 0;
	while(1){
		z = getchar(); // 得多用一個變數 z 來存儲， 為避免資料遺失 
		if (z ==' '){ 
			break;
		}
		f[i] = z;
		i++;
	}
	while(1){
		z = getchar(); // 得多用一個變數 z 來存儲， 為避免資料遺失 
		if (z =='\n'){ 
			break;
		}
		l[j] = z;
		j++;
	}
	int x, y;
	int a, b, c;
	scanf("%d%d", &x, &y); // 3 3
	for (a = 0; a<3 ; a++){
		for (b = 0; b<x;b++){
		printf("%c", f[b]);
		}
		for (c = 0; c<y;c++){
			printf("%c", l[c]);
		}
		printf("\n");
	}
	
	return 0;
}
