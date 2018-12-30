#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void mul_table(){
	int i, j,t, num;
	scanf("%d", &t);
	for (j = 1; j <= t; j++){
		for (i = 1; i <= j; i++){
			num = i*j;
			printf("%d*%d=%d\t", i, j, num);
		}
		printf("\n");
	}
}
int main()
{
	mul_table();
	system("pause");
	return 0;
}