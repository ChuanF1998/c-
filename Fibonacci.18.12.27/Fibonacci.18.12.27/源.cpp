#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//1.循环方式
int Fibonacci(int n){
	int j;
	if (n == 1 || n == 2){
		j = 1;
	}
	if (n > 2){
		int i=1,t,Fibonacci_1=1,Fibonacci_2=1;
		for (i = 1; i < n - 1; i++){
			j = Fibonacci_1 + Fibonacci_2;
			t = Fibonacci_1;
			Fibonacci_1 = j;
			Fibonacci_2 = t;
		}
	}
	return(j);
}
//2.递归方式
int fibonacci(int n){
	int t;
	if (n == 1 || n == 2){
		return(1);
	}
	if (n > 2){
		t = fibonacci(n - 1) + fibonacci(n - 2);
		return(t);
	}
}
int main(){
	int n,x,y;
	scanf("%d", &n);
	x=Fibonacci(n);
	printf("第%d个斐波那契数为：%d\n", n, x);
	y=fibonacci(n);
	printf("第%d个斐波那契数为：%d\n", n, y);
	system("pause");
	return 0;
}