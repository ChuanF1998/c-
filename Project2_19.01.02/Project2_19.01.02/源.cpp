
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
unsigned int reverse_bit(unsigned int value){
	int ret = 0;
	int bit = 0;
	int i;
	for (i = 0; i < 32; i++)
	{
		ret = ret << 1; //����һλ������ǰһλ
		bit = value & 1; //ȡ�����һλ
		value = value >> 1;//ֵ���ƣ�ȡ��һλ
		ret = bit | ret; //���һλ����ret
	}
	return ret;
}
unsigned int reverse_bit(unsigned int value){
	int ret = 0;
	for (int i = 0; i < 32; i++){
		ret = ret + pow(2.0, 31 - i)*((value >> i) & 1);
	}
	return ret;
}
int main(){
	printf("%u\n", reverse_bit(25));
	system("pause");
	return 0;
}