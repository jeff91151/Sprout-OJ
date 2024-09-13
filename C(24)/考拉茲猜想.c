#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x, y;
	int i, t;
	scanf("%d", &t); // 經歷次數 
	int out[t]; // 設定陣列以存儲輸出值 
	int a;
	int temp;
	int n1, n2;
	// 第一個 for 主要做 運算 以及 比大小留下前兩個大的 
	for (i=0; i<t; i++){
		scanf("%d%d", &x, &y);
		n1 = x;
		temp = x; 
		n2 = 0;
		while (1){
		a =  temp % 2;
		 
		if (temp > y || temp == 1){
			out[i] = n2; // 將 第二大的存於 out 陣列中 

			break;
		} else {
			if (a == 0){
				temp = temp / 2; 
			} else if (a == 1){
				temp = 3*temp + 1;
			}

		}
		// 此 if 用作 比大小 
		if(n1 > temp && temp > n2) 
		{
			n2 = temp;
		} else if (temp > n1){
			n2 = n1;
			n1 = temp;
		}
	}
	}
	// 最後一個 for 用作 將第二大的輸出依序列出 
	for (i=0; i<t;i++){
		printf("%d\n", out[i]);
	}
	
	
	return 0;
}
