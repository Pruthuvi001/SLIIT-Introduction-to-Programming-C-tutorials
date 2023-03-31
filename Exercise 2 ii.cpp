#include<stdio.h>
int main(void)
{
	int x = 10;
	do {
		printf("%d", x);
		x--;
	} while (x > 1);
	return 0;
}