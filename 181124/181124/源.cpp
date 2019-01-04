#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=1, b=2, c;
	/*第一种用中间变量
	c = a;
	a = b;
	b = c;*/
	/*第二种不用中间变量
	a = a^b;
	b = a^b;
	a = a^b;*/
	printf("a=%d b=%d\n", a, b);
	system("pause");
	return 0;
}