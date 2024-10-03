//Program to calculate the fine for overdue library books
/*Author:Joseph
Reg No:CT102/G/22241/24
Date:02/10/2024
*/
#include <stdio.h>

int main() {
  int bookID,dueDate,returnDate,daysOverdue,fineRate,fineAmount;//%d

  printf("Enter bookID:");
  scanf("%d",&bookID);

  printf("Enter dueDate:");
  scanf("%d",&dueDate);

  printf("Enter returnDate:");
  scanf("%d",&returnDate);
  
  daysOverdue=returnDate-dueDate;
  printf("daysOverdue is %d \n",daysOverdue);
  
  if(daysOverdue<=7){
  fineRate=20;
  printf("fineRate is %d\n",fineRate);
  fineAmount=fineRate*daysOverdue;
  printf("fineAmount is %d",fineAmount);
  }
  
  else if(daysOverdue<=14){
  fineRate=50;
  printf("fineRate is %d \n",fineRate);
  fineAmount=fineRate*daysOverdue;
    printf("fineAmount is %d",fineAmount);
  }
  else{
  fineRate=100;
  printf("fineRate is %d\n",fineRate);
  fineAmount=fineRate*daysOverdue;
    printf("fineAmount is %d",fineAmount);
  }
  return 0;
}
