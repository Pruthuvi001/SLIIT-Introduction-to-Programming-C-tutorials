#include<stdio.h>
#define SALESPERSON 4 //define salesperson
#define PRODUCT 5 //define poduct
int main(void)
{ //begins to execute programme
	int emp[SALESPERSON][PRODUCT] = {0}; //decalre array
	int i, j; //counting variables
	int salesPersonNo, productNo, sales, sum; //declare variables
	printf("Enter the Salesperson number = "); //prompt
	scanf("%d", &salesPersonNo); //read salesperson number
	
	while(salesPersonNo != -1){ //run the loop until type -1
		printf("Enter the Product number = "); //prompt
		scanf("%d", &productNo); //read product number
		
		printf("The total dollar value of that product sold that day = $"); //prompt
		scanf("%d", &sales); //read the price sold on that day
		
		emp[salesPersonNo - 1][productNo - 1] = sales; //assign the total value of the array
		
		printf("Enter the Salesperson number = "); //prompt
		scanf("%d", &salesPersonNo); //read salesperson number
	}
	printf("\n"); //next line
	
	for(i = 0; i < SALESPERSON; ++i){ //loop for row
		for(j = 0; j < PRODUCT; ++j){ //loop for coloumn
			printf("%d\t", emp[i][j]); //print the array
		}
		printf("\n"); //next line
	}
	printf("\n"); //next line
	for(j = 0; j < PRODUCT; ++j){ //loop of coloumn
		sum = 0; //assign num to 0
		for(i = 0; i < SALESPERSON; ++i){ //loop for row
			sum = emp[i][j] + sum; //calcuate prodct sum
			}
		printf("Total sales of Products %d: %d\n", j + 1, sum); //display sum
		}
	printf("\n"); //net line
	return 0;
} //end function main