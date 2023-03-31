#include<stdio.h>
#include<string.h>
#define SIZE 10 //declare size as 10
int main(void)
{ //begins to execute the programme
	int i; //counting variable
	char word[SIZE]; //declare array
	
	printf("Enter the Word: "); //prpmpt
	scanf("%s", &word); //string array
	int s = strlen(word); //string length
	
	for (i = 0; i < (s / 2); i++){ //check if its a palindrome or not a palindrome
		if(word[i] == word[(s - 1) - i]){ //comparing from the middle possition 
			printf("%s is a Palindrome\n", word); //print palindrome word
		}
		else{ //or
			printf("%s is not a Palindrome\n", word); //prints not palindrome word
		}
	}
	return 0; //return function
} //end function main