//program to offer a loan
/*Author:Joseph
Reg No:CT102/G/22241/24
Date:02/10/2024
  */
#include <stdio.h>

int main() {
  int age,annual_income;//%d
  printf("Enter age:");
  scanf("%d",&age);
  printf("Enter annual_income:");
  scanf("%d",&annual_income);
  
  if(age>=21&annual_income>=21000){
    printf("Congratulations you qualify for a loan");
    }
    else{
      printf("Unfortunately,we are unable to offer you a loan at this time");
      
    }
  
  
  return 0;
}
