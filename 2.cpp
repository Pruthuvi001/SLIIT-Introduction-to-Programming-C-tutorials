#include<stdio.h>
#define ROW 4 //define rows
#define COLOUMN 4 //define coloumns
int main(void)
{ //begins to execute the programme
	int no1[ROW][COLOUMN] = {{5,7,8,10}, {9,3,0,6}, {8,1,9,2}, {4,7,2,1}}; //decalre 1st mattrix
	int no2[ROW][COLOUMN] = {{2,2,1,3}, {8,1,3,1}, {1,2,2,4}, {3,1,1,2}}; //declare 2nd mattix
	int i, j, sum; //counting variables and sum variable
	
	for(i = 0; i <= 3; ++i){ //count until 3 values
		for(j = 0; j <=3; ++j){ //count until 3 values
			printf("%3d", no1[i][j]); //display values
		}
		printf("\n"); //net line
	}
	printf("\n"); //next line
	
	for(i = 0; i <= 3; ++i){ //count until 3 values
		for(j = 0; j <= 3; ++j){ //count until 3 values
			sum = no1[i][j] + no2[i][j]; //calculation sum of mattrix
			printf("%3d", sum); //display the sum
		}
		printf("\n"); //next line
	}
	return 0; //return function
} //end function main