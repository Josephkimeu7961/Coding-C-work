#include <stdio.h>

int main() {
  int Book_ID,Due_Date,Return_Date,Days_Overdue,Fine_Rate,Fine_Amount;
  printf("Enter Book_ID:");
  scanf("%d",&Book_ID);
  printf("Enter Due_Date:");
  scanf("%d",&Due_Date);
  printf("Enter Return_Date:");
  scanf("%d",&Return_Date);
  
  Days_Overdue=Return_Date-Due_Date;
  printf("Days_Overdue is %d \n",Days_Overdue);
  
  
  
  if(Days_Overdue<=7){
  Fine_Rate=20;
  printf("Fine_Rate is %d\n",Fine_Rate);
  Fine_Amount=Fine_Rate*Days_Overdue;
  printf("Fine_Amount is %d",Fine_Amount);
  }
  
  else if(Days_Overdue<=14){
  Fine_Rate=50;
  printf("Fine_Rate is %d \n",Fine_Rate);
  Fine_Amount=Fine_Rate*Days_Overdue;
    printf("Fine_Amount is %d",Fine_Amount);
  }
  else{
  Fine_Rate=100;
  printf("Fine_Rate is %d\n",Fine_Rate);
  Fine_Amount=Fine_Rate*Days_Overdue;
    printf("Fine_Amount is %d",Fine_Amount);
  }
  return 0;
}
