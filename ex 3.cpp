#include<stdio.h>
int main(void)
{
	float num1,num2,sum;
	char op;
	
	printf("Enter the first number: ");
	scanf("%f%*c", &num1);
	
	printf("Enter an Operator(+,-,*,/): ");
	scanf("%c", &op);
	
	printf("Enter the second number: ");
	scanf("%f", &num2);
	
	if(op=='+')
	{
		sum=num1+num2;
		printf("The sum is %.2f", sum);
	}
	else if(op=='-')
		{
			sum=num1-num2;
			printf("The sum is %.2f", sum);
		}
		else if(op=='*')
			{	
				sum=num1*num2;
				printf("The sum is %.2f", sum);
			}
			else if(op=='/')
				{
					sum=num1/num2;
					printf("The sum is %.2f", sum);
				}
				else
					{
						printf("You have entered an Invalid operator");
					}
	return 0;
}