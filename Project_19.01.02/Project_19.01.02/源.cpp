//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
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
			printf("a是凶手\n");
		}
		else if (b == 1){
			printf("b是凶手\n");
		}
		else if (c == 1){
			printf("c是凶手\n");
		}
		else if (d == 1){
			printf("d是凶手\n");
		}
	}
	system("pause");
	return 0;
}