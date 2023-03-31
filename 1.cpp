#include<stdio.h>
int main(void)
{ //begins to execute
	int number, Inumber; //declare variables
	FILE * numPtr; //decalre file pointer
	numPtr = fopen("number.dat", "a+"); //open file to read and write
	if(numPtr == NULL){ //check if the file is null
		printf("Can't read a file"); //display an error
		return -1; //exits the programme if null
	} //end if statement
	printf("Enter a Number: "); //prompt
	scanf("%d", &Inumber); //read a number
	fscanf(numPtr, "%d", &number); //read the values from file
	while(!feof(numPtr)){ //read values until end of the file
		if(Inumber == number){ //check the values in file and user inputs are same
			printf("Error ! The number is already exists"); //display error
			return -1; //exits if values are same
		} //end if function
		fscanf(numPtr, "%d", &number); //read the values from file
	} //end while statement
	fprintf(numPtr, "%d\t", Inumber); //store value in the file
	fclose(numPtr); //close the file
	numPtr= fopen("number.dat", "r"); //open the file to read
	fscanf(numPtr, "%d", &number); //read the values from the file
    while(!feof(numPtr)){ //read values until end of the file
    	printf("%d\t", number); //display the values
    	fscanf(numPtr, "%d", &number); //read the values from the file
	} //end while statement
    fclose(numPtr); //close the file
	return 0; //return function
} //end function main