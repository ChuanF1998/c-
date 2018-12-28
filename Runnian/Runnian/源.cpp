#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num, i;
	for (num = 1000; num <= 2000; num++)
	{
		//if (num % 4 == 0 && num % 100 == !0)
		if (num % 4 == 0 && num % 100 != 0){
			printf("%d\t", num);
		}
		if (num % 100 == 0 && num % 400 == 0){
			printf("%d\t", num);
		}
	}
	system("pause");
	return 0;
}