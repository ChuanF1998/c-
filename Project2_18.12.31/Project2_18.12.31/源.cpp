#include<stdio.h>
#include<stdlib.h>
int string_num(char *string){
	int num = 0;
	if ('\0' != *(string++)){
		num=1+string_num(string);
	}
	return num;
}
int main(){
	char *a="qwer";
	printf("%d\n",string_num(a));
	system("pause");
	return 0;
}