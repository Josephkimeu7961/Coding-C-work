//C funtions
#include <stdio.h>
#include <math.h>
int sum(int x,int y,int z);
float division(float a,float b);

int main(){
	int result,a,b,c;
	float div;
	
	printf("Enter 3 values:");
	scanf("%d%d%d",&a,&b,&c);
	result=sum(a,b,c);
	
	div=division(30,20);
	
	printf("The result is %d\n",result);
	printf("The division is %f\n",div);
}
int sum(int x,int y,int z){
	int result;
	result=x+y+z;
	return result;
}
float division(float a,float b){
	float div;
	div=a/b; 
	return div;
}