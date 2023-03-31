#include<stdio.h>
int main (void)
{
	int m1;
	int m2;
	int tot;
	float avg;
	
	printf("Enter the First Mark:");
	scanf("%d",&m1);
	
	printf("Enter the Second Mark:");
	scanf("%d",&m2);
	
	printf("First Mark=%d\n",m1);
	printf("Second Mark=%d\n",m2);
	
	tot=m1+m2;
	printf("Total Marks=%d\n",tot);
	
	avg=tot/2;
	printf("Average of Marks=%.2f\n",avg);
	return 0;
}