#include<stdio.h>
int main(void)
{ //begins to execute
	char name[10], type; //declare variables
	int consulting = 0, scanning = 0, testing = 0; //declare variables
	FILE * cfPtr; //decalre file pointer
	cfPtr = fopen("appoinments.dat", "r"); //open file to read
	if(cfPtr == NULL){ //check if the file is null
		printf("Can't read a file"); //display an error
		return -1; //exits the programme if null
	} //end if statement
	fscanf(cfPtr, "%s %c", name, &type); //read the values from file
	while(!feof(cfPtr)){ //read values until end of the file
		if(type == 'C'){ //check the appointment type
			consulting++; //increase the type from 1
		} //end if statement
		else if(type == 'S'){ //check the appointment type
				scanning++; //increase the type from 1
			} //end if statement
			else if(type == 'T'){ //check the appointment type
					testing++; //increase the type from 1
				} //end if statement
		fscanf(cfPtr, "%s %c", name, &type); //read the values from file
	} //end while statement
	printf("Appointment Type\tNumber of Patients\n"); //display the headings
	printf("Consulting\t\t%d\n", consulting); //display the consulting patients
	printf("Scanning\t\t%d\n", scanning); //display the scanning patients
	printf("Testing\t\t\t%d\n", testing); //display the testing patients
	fclose(cfPtr); //close the file
	return 0; //return function
} //end function main