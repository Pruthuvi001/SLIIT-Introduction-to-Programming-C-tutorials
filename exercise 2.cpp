#include<stdio.h>
int main(void)
{
	char type;
	float balance,amount,newBalance;
	
	printf("Enter the Transaction Type: ");
	type=getchar();
	
	if((type=='w')||(type=='W'))
	{
		printf("You have selected to Withdraw Money\n");
		
		printf("Enter your current Bank Balance: ");
		scanf("%f", &balance);
		
		printf("Enter the amount you want to Withdraw: ");
		scanf("%f", &amount);
		
		newBalance=balance-amount;
		printf("Your New Balance is %.2f", newBalance);
	}
	else if((type=='d')||(type=='D'))
	{
		printf("You have selected to Deposit Money\n");
		
		printf("Enter your current Bank Balance: ");
		scanf("%f", &balance);
		
		printf("Enter the amount you want to Deposit: ");
		scanf("%f", &amount);
		
		newBalance=balance+amount;
		printf("Your New Balance is %.2f", newBalance);
	}
	else
	{
		printf("You have selected an Invalid Transaction Type");
	}
	return 0;
}