#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char answer[1005]; // 
	char guess[1005];
	
	char z;
	int i = 0;
	// 將正確答案存下來 
	while(1){
		z = getchar(); // 得多用一個變數 z 來存儲， 為避免資料遺失 
		if (z =='\n'){ // 得用 ''， but 暫時不了解
			break;
		}
		answer[i] = z;
		i++; 
	}
	char eng[26] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90};
	int j;
	char out[i];
	int num[26] = {0};
	for(j=0;j<i;j++){
		int offset = answer[j]-'A';
		out[j] = eng[offset];
		num[out[j]-'A']++;
	}
//	// TEST
//	printf("%d", num[0]);
//	for (j = 1; j < 26; j++) {
//		printf(" %d", num[j]);
//	}
	char out2[i];
	while(1){
		int offset2 = 0;
		int num2[26] = {0};
		int k = 0;
		int c = 0;
		while(1){
		z = getchar(); // 得多用一個變數 z 來存儲， 為避免資料遺失 
		if (z =='\n'||z==EOF){ // 得用 ''， but 暫時不了解
			break;
		}
		guess[k] = z;
		k++; 
	}	
		for(j=0;j<i;j++){
		int offset2 = guess[j]-'A';
		out2[j] = eng[offset2];
		num2[out2[j]-'A']++;
	}
		for(j=0;j<i;j++){
			if (out[j] == out2[j] && num2[out2[j]-'A'] == num[out[j]-'A']){
				printf("A");
				c++;
			} else if (out[j] != out2[j] && num2[out2[j]-'A'] == num[out2[j]-'A']){
				printf("B");
			} else {
				printf("C");
			}
		}
		printf("\n");
		if (c == (i)){
			break;
		}
	}
	
	
	return 0;
}
