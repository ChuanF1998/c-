#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//��һ��
int func_1(int x, int y){
	int aver;
	aver = x + (y - x) / 2;
	return aver;
}
//�ڶ���,ʹ��λ������
int func_2(int x, int y){
	int temp;
	while ((x&y) != 0){  //whileѭ���жϣ�ͬλ��1��1��ִ��ѭ��
		temp = x&y;      //ͬλ��0��1����1��0����ִ��ѭ��
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
