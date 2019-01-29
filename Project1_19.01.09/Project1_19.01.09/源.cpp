#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
void swap(char *left, char *right)
{
	assert(left != NULL);
	assert(right != NULL);
	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void reverse(char *arr)
{
	//整体逆置
	int len = strlen(arr);
	swap(arr, arr + len - 1);
	//每个单词的逆置
	while (*arr != '\0')//若arr不等于\0说明还没有到最后一个单词
	{
		char *start = arr;//单词的起始位置
		char *end = start;//单词的结束位置
		while ((*end != ' ') && (*end != '\0'))//连接符必须为&&
		{
			end++;//end指向空格位置的地址
		}
		swap(start, end - 1);
		//单词的起始位置为start，结束位置为空格前一个字符（end-1）
		if (*end != '\0')
			arr = end + 1;
		//当结束一个单词的逆置后，下一个单词的开始为空格后一个字符（end+1）
		else
			arr = end;

	}
}
int main()
{
	char arr[] = "student a am i";
	reverse(arr);//完成整个过程的逆序,只传递这个数组过去，不用传数组的大小
	printf("%s\n", arr);
	system("pause");
	return 0;
}
