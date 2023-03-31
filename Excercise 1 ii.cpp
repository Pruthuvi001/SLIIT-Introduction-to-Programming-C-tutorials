#include<stdio.h>
int main(void)
{
	int num;
	printf("Enter a number :");
	scanf("%d", &num);
	
	while(num >= 0) {
		printf("%d\n", num);
		printf("Enter a number :");
		scanf("%d", &num);
	}
	return 0;
}