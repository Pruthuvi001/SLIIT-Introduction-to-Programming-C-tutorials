#include<stdio.h>
#include<assert.h>
#include<math.h>
double hypotenuse(double x, double y); //function prototype
int main(void)
{ //begins to execute
	double side1, side2; //declare variables
	assert(fabs(hypotenuse(3.0, 4.0)- 5.0) < 0.001); //debug the triangle value
	assert(fabs(hypotenuse(5.0, 12.0)- 13.0) < 0.001); //debug the triangle value
	assert(fabs(hypotenuse(8.0, 15.0))- 17.0) < 0.001); //debug the triangle value
	
	printf("Enter the Side 1: "); //prompt
	scanf("%lf", &side1); //read the 1st side triangle value
	printf("Enter the Side 2: "); //prompt
	scanf("%lf", &side2); //read the second triangle value
	
	printf("Hypotenuse: %.2lf", hypotenuse(side1,side2)); //display hypotenuse
}
double hypotenuse(double x, double y) //calling function 
{ //begins function hypotenuse
	return sqrt((x*x)+(y*y)); //return value
} //end function hypotenuse