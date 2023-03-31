#include<stdio.h>
int main(void) //begins to execute the programme
{
	int marks[10]; //declare the array
	int i; //count variable
	
	for(i = 0; i < 10; i++){ //read the marks for 10 times by for loop
		printf("Enter the mark of Student %d :- ", i + 1); //prompt
		scanf("%d", &marks[i]); //read the mark entered by the user
	} //end for loop
	
	return 0; //exit the programme
} //end function main