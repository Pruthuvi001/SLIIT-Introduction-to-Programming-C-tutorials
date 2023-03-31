#include<stdio.h>
#define SIZE 5
int main(void)
{ //begins to execute the programme
	int motion[SIZE]; //declare the array
	int i; //counting variable
	int a; //decalre variables
	
	for(i = 0; i < SIZE; i++){ //reading numbers from the keyboard for 5 times  
		printf("Input a Number: "); //prompt
		scanf("%d", &motion[i]); //read the numbers to store in array
	} //end for loop
	
	for(i = 0; i < SIZE; i++){ //printing numbers for 5 times by for loop
		printf("%d\t", motion[i]); //print the values of the array
	}
	
	printf("\n"); //next line
	
	a = motion[0]; //assign 1st value of the aray to a variable for display at the end
	
	for(i = 1; i < SIZE; i++){ //rotate for 5 times
		motion[i - 1] = motion[i]; //rotate the array values reducing value by 1
		printf("%d\t", motion[i]); //display the rotated values
	}
	
	printf("%d", a); //display the 1st value at last
	
	return 0;
} //end function main