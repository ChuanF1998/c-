#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void Exchange(int a, int b){
	int t;
	t = a;
	a = b;
	b = t;
	printf("%d %d", a, b);
}
int main(){
	//int a, b;
	//scanf("%d %d", &a, &b);
	//Exchange(a, b);
	Exchange(4, 6);
	system("pause");
	return 0;
}