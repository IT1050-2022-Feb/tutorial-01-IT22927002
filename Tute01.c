/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */
#include <stdio.h>

int main() {
   //declare variables
  int marks1,marks2;
  float avg;
   
   //input two marks
   printf("Enter two marks:\n");
   scanf("%d%d",&marks1,&marks2);
   
   //calculations
   avg=(marks1+marks2)/2.0;
   //output average
   printf("Average of two marks is %.2f",avg);
  
  return 0;
}//end progra

