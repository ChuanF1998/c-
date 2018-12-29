#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int func(int n,int k ){
	int t,i;
	if (k == 1){
		t = n;
	}else{
		t = func(n, k - 1)*n;
	}
	return(t);
}
int main(){
	int n, k,t;
	scanf("%d %d", &n, &k);
	t = func(n, k);
	printf("%d\n", t);
	system("pause");
	return 0;
}
