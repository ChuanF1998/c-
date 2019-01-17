
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
unsigned int reverse_bit(unsigned int value){
	int ret = 0;
	int bit = 0;
	int i;
	for (i = 0; i < 32; i++)
	{
		ret = ret << 1; //左移一位，保存前一位
		bit = value & 1; //取出最后一位
		value = value >> 1;//值右移，取下一位
		ret = bit | ret; //最后一位赋给ret
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