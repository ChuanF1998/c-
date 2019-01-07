#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void DigitSum(int n){
	int t;
	if (n < 10){
		t = n;
		printf("%d", t );
	}else{
	    DigitSum(n / 10);
		t = n%10;
		printf("%d", t);
	}
}
int main(){
	int n,t;
	scanf("%d", &n);
	DigitSum(n);
	system("pause");
	return 0;
}