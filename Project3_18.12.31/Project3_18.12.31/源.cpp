#include<stdio.h>
#include<stdlib.h>
int string_num(char*string){
	int count = 0;
	while (*(string) != '\0'){
		count++;
		++string;
	}
	return count;
}
int main(){
	char *a = "qwer";
	printf("%d\n", string_num(a));
	system("pause");
	return 0;
}