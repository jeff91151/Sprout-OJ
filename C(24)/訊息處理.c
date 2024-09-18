#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int i;
	scanf("%d", &i);
	char store[i];
	int k = 0;
	int total = 0;
	char eng[26] = {97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122};
	char z;
	z = getchar();
	while(1){
		
		z = getchar();
		if (z == '\n' || z == EOF){
			break;
		}
		store[k] = z;
		if ((z >= 'a' && z <= 'z') || (z >= 'A' && z <= 'Z')){
			total++;
		}
		k++;
	}
//	printf("total = %d\n", total);
	int j;
	char out[i];
	int a = 0;
	for(j=0;j<i;j++){
		if (store[j] >= 'a' && store[j] <= 'z'){
			out[a] = store[j];
			a++;
		} else if(store[j] >= 'A' && store[j] <= 'Z'){
			out[a] = eng[store[j]-'A'];
			a++;
		}
//		printf("y");
	}
//	printf("a = %d", a);
	for(j=0;j<total;j++){
		printf("%c", out[j]);
	}
	printf("\n");
	char real[i];
	int num[26]={0};
	for(j=0;j<total;j++){
		int offset = out[j]-'a';
		real[j] = eng[offset];
		num[real[j]-'a']++;
	}
	printf("%d", num[0]);
	for(j=1;j<26;j++){
		printf(" %d", num[j]);
	}
	printf("\n");
//	printf("z");
	return 0;
}
