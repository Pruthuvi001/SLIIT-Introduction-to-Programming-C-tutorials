#include<stdio.h>
int main(void)
{
	int a;
	int b; 
	int c=7;
	for (a = 1; a <= 7; a++){
		for ( b = 1; b <= a; b++){
			printf ("*");
		}
		printf ( "\n" );	
	}
	
	for (a = 1;a <= 4; a++){
		for (b = c; b >= 1; b-- ){
			printf("*");
		}
		printf ("\n");
		c=c-2;
	}
return 0;
}