#include<stdio.h>
int main(void)
{
	int number,value;
	printf("Enter a Number: ");
	scanf("%d", &number);
	
	if(number<0)
	{
		number=number*(-1);
	}
	printf("Value= %d", number);
	return 0;
}