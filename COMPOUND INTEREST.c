#include<stdio.h>

int main()
{
  float P,t,r,n,CI,A;
  
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
  
  A=P*pow((1+r/n),(n*t));
  printf("A is %f \n",A);
  
  CI=A-P;
  printf("CI is %f",CI);
  
  
  
  
  return 0;
  }
 
 
