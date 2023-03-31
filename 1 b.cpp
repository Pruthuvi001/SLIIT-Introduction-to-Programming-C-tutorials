#include<stdio.h>
int main(void) //begins to execute the programme
{
	int marks[10]; //declare the array
	int i; //count variable
	
	for(i = 0; i < 10;){ //read the marks for 10 times by for loop
			printf("Enter the mark between 0 to 20 of Student %d :- ", i + 1); //prompt
			scanf("%d", &marks[i]); //read the mark entered by the user
			if((marks[i] > 0)&&(marks[i] <= 20)){ //check the marks between 0 to 20
			i++; //increament the value of the statement is true
		} //end if statement
	} //end for loop
	
	return 0; //exit the programme
} //end function main