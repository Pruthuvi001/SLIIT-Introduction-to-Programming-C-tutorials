#include<stdio.h>
#include<assert.h>
int qualityPoints(float avg); //function prototype
int main(void) //begin to execute
{ 
	float average; //declare variables
	assert (qualityPoints(100) == 4); //debug the boundry values
	assert (qualityPoints(95) == 4); //debug the middle range values
	assert (qualityPoints(90) == 4); //debug the boundry values
	assert (qualityPoints(89) == 3); //debug the boundry values
	assert (qualityPoints(87) == 3); //debug the middle range values
	assert (qualityPoints(80) == 3); //debug the boundry values
	assert (qualityPoints(79) == 2); //debug the boundry values
	assert (qualityPoints(74) == 2); //debug the middle range values
	assert (qualityPoints(70) == 2); //debug the boundry values
	assert (qualityPoints(69) == 1); //debug the boundry values
	assert (qualityPoints(66) == 1); //debug the middle range values
	assert (qualityPoints(60) == 1); //debug the boundry values
	assert (qualityPoints(59) == 0); //deug the lower value
	
	printf("Enter the Average: "); //prompt
	scanf("%f", &average); //read the average
	
	printf("%d", qualityPoints(average)); //display the qulaity points
} //end function main
int qualityPoints(float avg) //calling function
{ //begin function qualityPoints
	if((avg >= 90)&&(avg <= 100)){ //checking for values
		return 4; //return value
	}
	else if(avg >= 80){ //checking for values
		return 3; //return value
		}
		else if(avg >= 70){ //checking for values
			return 2; //return value
			}
			else if(avg >= 60){ //checking for values
				return 1; //return value
				}
				else{ 
					return 0;
					}
} //end function qulityPoints
