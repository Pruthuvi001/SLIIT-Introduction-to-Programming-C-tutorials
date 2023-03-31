#include<stdio.h>
#define SIZE 10
int main(void) //begins to execute the programme
{
	int marks[SIZE]; //declare the array
	int i; //count variable
	int sum; //decalre sum variable
	
	for(i = 0; i < SIZE;){ //read the marks for 10 times by for loop
		printf("Enter the mark between 0 to 20 of Student %d :- ", i + 1); //prompt
		scanf("%d", &marks[i]); //read the mark entered by the user
		if((marks[i] > 0)&&(marks[i] <= 20)){ //check the marks between 0 to 20
			i++; //increament the value of the statement is true
		} //end if statement
	} //end for loop
	
	for(i =0; i < SIZE; i++){ //display marks for 10 times by for loop
		printf("Mark of Student %d : %d\n", i + 1, marks[i]); //display marks of the students
	} //end for loop
	
	for(i = 0; i < SIZE; i++){ //check all values of the array
		sum += marks[i]; //intializing array values for sum
	} //end for loop
	printf("Mean = %.1f", sum / (float)i); //display mean of the marks stored in array
	
	return 0; //exit the programme
} //end function main