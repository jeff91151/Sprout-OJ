#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	scanf("%d", &a);
	switch(a){
		case 1:
		case 2:
		case 3: printf("spring\n"); break;
		case 4:
		case 5:
		case 6: printf("summer\n"); break;
		case 7:
		case 8: 
		case 9: printf ("fall\n"); break;
		case 10:
		case 11:
		case 12: printf ("winter\n"); break;
	}
	return 0;
}
