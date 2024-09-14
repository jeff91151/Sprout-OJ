#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	scanf ("%d", &a);
	int grade[a];
	int i;
	// 依序輸入 
	for (i=0;i<a;i++){
		scanf("%d", &grade[i]);
	}
	// 比大小 若大於0 就拉回0，若小於則不變動
	for (i=0; i<a; i++){
		if (grade[i]>0){
			grade[i] = 0;
		}
	} 
	// 輸出反過來
	for (i=a-1; i>=0; i--){
		printf("%d\n", grade[i]);
	} 
	
	
	return 0;
}
