#include <stdio.h>
#include <stdlib.h>

int  x = 5,  y = 9, q; 
int main(){

	printf("X = %d E Y = %d\n", x, y);
    	 q = x;
	 x = y;
	 y = q;
	printf("X = %d E Y = %d\n", x, y);
	return 0;
}
