#include<stdio.h>
#include<stdlib.h>

int main(){
	int arr[] = { 2, 45, 6, 2, 5, 8, 8, 45, 5 };
	int num = sizeof(arr) / sizeof(arr[0]);
	int t = arr[0];
	for (int i = 1; i < num; i++){
		t = t ^ arr[i];
	}
	printf("%d\n", t);
	system("pause");
	return 0;
}