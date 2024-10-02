//program to calculate compound interest
/*Author:Joseph
Reg No:CT102/G/22241/24
Date:2/10/2024
*/
#include<stdio.h>

int main()
{
  float P,t,r,n,CI,A;//%f 
  
  printf("Enter P:");
  scanf("%f",&P);
  printf("P is %f \n",P);
  
  printf("Enter t:");
  scanf("%f",&t);
  printf("t is %f \n",t);
  
  
  printf("Enter r:");
  scanf("%f",&r);
  r=r/100;
  printf("r is %f \n",r);
  
  printf("Enter n:");
  scanf("%f",&n);
  printf("n is %f \n",n);

//The formula below is for calculating  amount 
  A=P*pow((1+r/n),(n*t));
  printf("A is %f \n",A);
  
  CI=A-P;
  printf("CI is %f",CI);
  
  
  
  
  return 0;
  }
 
 
