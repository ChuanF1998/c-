//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
//���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
#include<stdio.h>
#include<stdlib.h>

int main(){
	int a = 0, b = 0, c = 0, d = 0;
	for (a = 0; a < 2; a++)
	for (b = 0; b < 2; b++)
	for (c = 0; c < 2; c++)
	for (d = 0; d < 2; d++)
	if (((a == 0) + (c == 1) + (d == 1) + 
		((a == 1) + (b == 1) + (c==1)==1))
		==3)
	if (a + b + c + d == 1){
		if (a == 1){
			printf("a������\n");
		}
		else if (b == 1){
			printf("b������\n");
		}
		else if (c == 1){
			printf("c������\n");
		}
		else if (d == 1){
			printf("d������\n");
		}
	}
	system("pause");
	return 0;
}