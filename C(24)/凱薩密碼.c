#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {

	
	char c[500]= {0};
	int i = 0;
	char z = 0;
	while(1){
		z = getchar(); // 得多用一個變數 z 來存儲， 為避免資料遺失 
		if (z =='\n'){ // 得用 ''， but 暫時不了解 
			break;
		}
		c[i] = z;
		i++; //3
	}
	int j;
	// 將 ascii 的英文字母 數字 向右位移 3 
	for (j=0;j<i;j++){
		if (c[j] == 120){
			c[j] = 97;
		} else if (c[j] == 121){
			c[j] = 98;
		} else if (c[j] == 122){
			c[j] = 99;
		} else {
			c[j] = c[j] + 3;
		}

	}
	// 印出來 
	for (j=0;j<i;j++){
		printf("%c", c[j]);
	}
	printf("\n");
	
	return 0;
}
