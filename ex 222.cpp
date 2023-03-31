#include<stdio.h>
int main(void)
{
	char type;
	float balance,amount;
	
	printf("Enter the Transaction Type: ");
	type=getchar();
	
	if((type=='w')||(type=='W'))
	{
		printf("You have selected to Withdraw Money\n");
	}
	
	else if((type=='d')||(type=='D'))
		{
			printf("You have selected to Deposit Money\n");
		}
	
		else
			{
				printf("You have selected an Invalid Transaction Type");
				return -1;
			}
		
	printf("Enter your current Bank Balance: ");
	scanf("%f", &balance);
		
	printf("Enter the amount: ");
	scanf("%f", &amount);

	if((type=='w')||(type=='W'))
	{
		balance=balance-amount;
		printf("Your New Balance is %.2f", balance);
	}
	
	else if((type=='d')||(type=='D'))
		{
			balance=balance+amount;
			printf("Your New Balance is %.2f", balance);	
		}
	
	return 0;
}