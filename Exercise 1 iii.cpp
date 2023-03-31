#include<stdio.h>
int main(void)
{
	int num;
	int count;
	int sum;
	double avg;
	sum = 0;
	count = 0;
	printf("Enter a number :");
	scanf("%d", &num);
	
	while(num >= 0) {
		printf("%d\n", num);
		sum = sum + num;
		count = count + 1;
		printf("Enter a number :");
		scanf("%d", &num);
	}
	avg = sum / count;
	printf("The sum of the postive numbers is %d\n", sum);
	printf("The avarage of the postive numbers is %.1lf", avg);
	return 0;
}