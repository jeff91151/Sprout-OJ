#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x, y, z;
	scanf ("%d%d%d", &x, &y, &z);
	if (x == y){
		if (y == z){
			printf("Equilateral Triangle\n");
		} else {
			printf("Isosceles Triangle\n");
		}
	} else {
		if (y == z){
			printf ("Isosceles Triangle\n");
		} else  if (x == z){
			printf ("Isosceles Triangle\n");
		} else {
			printf ("Scalene Triangle\n");
		}
	}

	return 0;
}
