#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=1, b=2, c;
	/*��һ�����м����
	c = a;
	a = b;
	b = c;*/
	/*�ڶ��ֲ����м����
	a = a^b;
	b = a^b;
	a = a^b;*/
	printf("a=%d b=%d\n", a, b);
	system("pause");
	return 0;
}