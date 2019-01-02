#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//非递归方式(循环方式）
int Factorial(int n){
	int t=1;
	for (int i = 1; i < n + 1; i++){
		t = t*i;
	}
	return(t);
}
//递归方式
int factorial(int n){
	int t;
	if (n == 1){
		t = 1;
	}
	else{
		t = factorial(n - 1)*n;
	}
	return(t);
}
int main(){
	int n,x,y;
	scanf("%d", &n);
	x = Factorial(n);
	printf(" %d 的阶乘为：%d\n", n, x);
	y = factorial(n);
	printf(" %d 的阶乘为：%d\n", n, y);
	system("pause");
	return 0;
}