#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int  i,n,j=0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		if (i % 10 == 9){
			j++;
		}
		else if (i / 10 == 9){
			j++;
		}
	}
		printf("出现9的次数：\n");
		printf("%d\n", j);
	system("pause");
	return 0;
}

