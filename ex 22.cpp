#include<stdio.h>
int main(void)
{
	char type;
	float balance,amount,newBalance;
	printf("Enter the Transaction Type : ");
	type=getchar();
	//scanf("%c", &type);
	if(type=='w','W')
	{
		printf("You have selected to Withdraw Money\n");
	}
	else if(type='d','D')
	{
		printf("You have selected to Deposit Money\n");
	}
	else
	{
		printf("You have Selected an Inavalid transaction type");
	}
	printf("Enter the Bank Balance : ");
	scanf("%f", &balance);
	printf("Enter the Amount : ");
	scanf("%f", &amount);
	if(type=='w')
	{
		newBalance=balance-amount;
	}
	else if(type='d')
	{
		newBalance=balance+amount;
	}
	else
	{
		printf("You have Selected Invalid Transaction Type\n");
	}
	printf("Your New Balance is %.2f", newBalance);
	return 0;
}