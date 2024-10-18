//Program to determine structure
/*Author:Joseph
Reg No:CT102/G/22241/24
*/
#include <stdio.h>
#include <string.h>

struct book{
	char title[30];
	char author[30];
	int publicationYear;
	char ISBN[13];
	float price;
}book;

int main(){
	strcpy(book.title,"Introduction to C Programming");
	strcpy(book.author,"John Smith");
	book.publicationYear=2022;
	strcpy(book.ISBN,"9780131103627");
	book.price=49.99;
	
	printf("title:%s\n",book.title);
	printf("author:%s\n",book.author);
	printf("publication year:%d\n",book.publicationYear);
    printf("ISBN:%s\n",book.ISBN);
 	printf("price:%.2f\n",book.price);
 	
 	return 0;
}
