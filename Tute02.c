/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

int main() {
  //declare variables
	int distance;
	int Amount;
  
	//input distance
	printf("Enter the distance the van has travelled:");
	scanf("%d",&distance);
  
	//check wheather the distance is higher than 30 or not
		if(distance >= 30){
	
			Amount = 30*50+(distance-30)*40;
			}
			
		else
			Amount = distance *50;
  
	//output amount		
  	printf("Amount is %d",Amount);
  
  return 0;
}//end program
