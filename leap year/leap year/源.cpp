#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int Is_leapyear(){
	int year;
	scanf("%d", &year);
	if (year % 4 == 0 && year % 100 != 0){
		printf("%d是闰年！", year);
		return 1;
	}
	else if (year%400==0){
		printf("%d是闰年！", year);
		return 1;
	}
	else{
		printf("%d不是闰年！", year);
		return 0;
	}
}
int main()
{
	Is_leapyear();
	printf("\n");
	system("pause");
	return 0;
}