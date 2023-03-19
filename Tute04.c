/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
// Function declaration
int minimum(int no1,int no2);
int maximum(int no1,int no2);
int multiply(int no1,int no2);

int main() {
	//declare variables
   int no1, no2;
   
   //input numbers
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   
   //calling functions and output
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}//end program

//function to find maximum number
int maximum(int no1,int no2){
	int max;
	if(no1 > no2){
		max = no1;
	}
	else
		max= no2;
		
	return max;
	
}
//function to find minimum number
int minimum(int no1,int no2){
	int min;
	if(no1 < no2){
		min = no1;
	}
	else
		min= no2;
		
	return min;
	
}
//function to find multiply of numbers
int multiply(int no1,int no2){

	return no1*no2;
}
