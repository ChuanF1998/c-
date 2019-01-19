#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//第一种
int func_1(int x, int y){
	int aver;
	aver = x + (y - x) / 2;
	return aver;
}
//第二种,使用位操作符
int func_2(int x, int y){
	int temp;
	while ((x&y) != 0){  //while循环判断：同位（1，1）执行循环
		temp = x&y;      //同位（0，1）或（1，0）不执行循环
		y = x^y;
		x = temp << 1;
	}
	temp = x^y;
	return temp >> 1;
}
int main(){
	float x, y;
	scanf("%f %f", &x, &y);
	printf("%d\n", func_1(x, y));
	printf("%d\n", func_2(x, y));
	system("pause");
	return 0;
}
