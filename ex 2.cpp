#include<stdio.h>
int main(void)
{
	char type;
	float balance,amount,newBalance;
	printf("Enter the Transaction Type : ");
	//type=getchar();
	scanf("%c", &type);
	if(type=='w')
	{
		printf("You have selected to Withdraw Money");
	}
	else if(type='d')
	{
		printf("You have selected to Deposit Money");
	}
	else
	{
		printf("You have Selected Invalid Transaction Type");
	}
	printf("Enter the Bank Balance : ");
	scanf("%f", &balance);
	printf("Enter the Amount : ");
	scanf("%f", &amount);
	if(type='w','W')
	{
		newBalance=balance-amount;
	}
	else if(type='d','D')
	{
		newBalance=balance+amount;
	}
	else
	{
		printf("You have selected an Invalid Transaction Type");
	}
	printf("Your New Balance is %.2f", newBalance);
	return 0;
}