#include<stdio.h>
int main(void)
{
	int moduleMark;
	int module;
	int total;
	int student = 0;
	int highest = 0;
	
	while(student < 3){
		module = 0;
		total = 0;
		
		while(module < 4){
			module = module + 1;
			printf("Enter the Module Mark :");
			scanf("%d", &moduleMark);
			total = total + moduleMark;
		}
	printf("Total of the all four module is %d\n", total);
	
	if(total>highest){
		highest = total;
	}
	student++;
	}
	printf("The Highest Mark is %d", highest);
	return 0;
}