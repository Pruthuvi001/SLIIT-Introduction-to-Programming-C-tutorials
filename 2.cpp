#include<stdio.h>
float circleArea(float r); //declare the function
int main() //begins to execute the programme
{
	float radius; //radius to input by user
	printf("Enter the Radius: "); //prompt
	scanf("%f", &radius); //read the radius
	printf("%.2f", circleArea(radius)); //print the area of the circle
} //end function main
float circleArea(float r) //calling the function
{
	return 22/7.0*r*r; //declare the task of the function
} //end function circlearea