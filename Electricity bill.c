//Program to calculate electricity bill
/*Author:Joseph
Reg No:CT102/G/22241/24
Date:05/10/2024
*/
#include <stdio.h>
int main(){
	int customerID;
	char customerName;
	float unitConsumed,charges,totalBill,totalAmount;
	
	printf("Enter customerID:");
	scanf("%d",&customerID);
	printf("Customer ID is %d\n",customerID);

		
	printf("Enter customerName:");
	scanf("%s",&customerName);
	printf("Customer Name is %s\n",&customerName);
	
	printf("Enter unitConsumed:");
	scanf("%f",&unitConsumed);
	printf("Unit Consumed is %f\n",unitConsumed);
	
	
	if(unitConsumed<=199){
	charges=1.20;
		printf("charges is %f\n",charges);
		totalBill=charges*unitConsumed; 
		printf("Total Bill is %f\n",totalBill);
	}
	
else if(unitConsumed<=399){
	charges=1.50;
	printf("charges is %f\n",charges);
	totalBill=charges*unitConsumed;
	printf("Total Bill is %f\n",totalBill);
}

else if(unitConsumed<=599){
	charges=1.80;
	printf("charges is %f\n",charges);
	totalBill=charges*unitConsumed;
	printf("Total Bill is %f\n",totalBill);
}

else{
	charges=2.00;
	printf("charges is %f\n",charges);
	totalBill=charges*unitConsumed;
	printf("Total Bill is %f\n",totalBill);
}
if(totalBill>400){
	totalAmount=0.15*totalBill+totalBill;
	printf("Total Amount is %f",totalAmount);

}
if(totalBill<100){
	printf("Minimum Bill should be 100");
}
	

	return 0;
}