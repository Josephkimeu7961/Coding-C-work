//Program to calculate to simple interest
/*Author:Joseph
Reg No:CT102/G/22241/24
 Date:02/10/2024
 */

#include<stdio.h>

int main()
{
 float principal_amount,time,rate,simple_interest;//%f

printf("Enter principal_amount:");
scanf("%f",&principal_amount);
printf("The principal_amount is %f \n",principal_amount);

printf("Enter time:");
scanf("%f",&time);
printf("The time is %f \n",time);

printf("Enter rate:");
scanf("%f",&rate);
printf("The rate is %f \n",rate);

 //The formula below is for calculating simple interest
simple_interest=(principal_amount*time*rate)/100;
printf("The simple_interest is %f",simple_interest);

return 0;

  }
  

