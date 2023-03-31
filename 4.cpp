#include<stdio.h>
#define SIZE 10
int main(void)
{ //begins to execute the programme
	int value[SIZE]; //declare the array
	int i, j; //declare the counting variables
	
	for(i = 0; i < SIZE; i++){ //Taking values from keyboard for 10 times
		printf("Input Number :"); //prompt
		scanf("%d", &value[i]); //read numbers and store in array
		}
	
	printf("%s%13s%13s\n", "Elements", "Values", "Histogram"); //display graph headings
	
	for(i = 0; i < SIZE; i++){ //making 10 graph rows
		printf("%d", i); //display element row
		printf("%15d\t", value[i]); //display value row
		
		for(j = 0; j < value[i]; j++){ //counter loop
			printf("*"); //display histogram row
		}
		
		printf("\n"); //next line
	}
	return 0;
} //end function main