#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int Is_prime(int n){
	int t;
	for (t = 2; t < n; t++){
		if (n%t == 0){
			return(0);
		}
		else{
			return(1);
		}
	}
}
int main()
{
	int t;
	scanf("%d", &t);
	if (t == 1){
		printf("1�Ȳ�������Ҳ���Ǻ���\n");
	}
	else if(Is_prime(t) == 1){
		printf("%d������\n", t);
	}
	else{
		printf("%d��������\n", t);
	}
	system("pause");
	return 0;
}