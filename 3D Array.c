//3D Array
#include <stdio.h>
int main(){
	int i,j,k;
	int marks[2][2][3]={{{70,20,30},{29,50,60}},{{21,35,29},{61,44,55}}};
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<3;k++){
				printf("marks[%d][%d][%d]=%d\n",i,j,k,marks[i][j][k]);
			}
		}
	}
	return 0;
}