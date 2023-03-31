#include<stdio.h>
int add(int a, int b); //declare add function
int multiply(int c, int d); //declare multiply function
int square(int e); //declare square function
int main(void) //begins to execute the programme
{
	printf("%d", (square(add(multiply(3,4) ,multiply(5,7))))); //print and calculate the final output
}
int add(int a, int b) //calling add fuction
{
	int x = a + b; //task of the function
	return x;
} //end function add
int multiply(int c, int d) //calling multiply function
{
	int y = c * d; //task of the function
	return y;
} //end function multiply
int square(int e) //calling square function
{
	return e * e; //return to the main fuction
} //end function square