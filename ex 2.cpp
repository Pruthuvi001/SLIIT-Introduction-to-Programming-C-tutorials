#include<stdio.h>
int main(void)
{
	int n;
	int a;
	int b;
	int c;
	int d;
	int e;
	printf("Enter five digit numbers:");
	scanf("%d",&n);
	printf("You entered:%d",n);
	
	a=n/10000;
	b=(n/1000)-a*10;
	c=(n/100)-(a*100+b*10);
	d=(n/10)-(a*1000+b*100+c*10);
	e=(n)-(a*10000+b*1000+c*100+d*10);
	printf("\n%d\t%d\t%d\t%d\t%d",a,b,c,d,e);
	return 0;
}