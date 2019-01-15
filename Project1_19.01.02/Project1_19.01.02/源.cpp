#include<stdio.h>
#include<stdlib.h>

int main(){
	int triangle[10][10] = { 0 },col=0,row=0,i,j;
	for (col = 0; col < 10; col++){
		for (row = 0; row < 10; row++){
			triangle[row][0] = 1;
			triangle[row][row] = 1;
			if (col>0 && row>0){
				i = triangle[row - 1][col - 1];
				j = triangle[row-1][col];
				triangle[row][col] = i + j;
			}
		}
	}
	for (row = 0; row < 10; row++){
		for (col = 0; col <= row; col++){
			printf("%d  ", triangle[row][col]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}