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
	//��������
	int len = strlen(arr);
	swap(arr, arr + len - 1);
	//ÿ�����ʵ�����
	while (*arr != '\0')//��arr������\0˵����û�е����һ������
	{
		char *start = arr;//���ʵ���ʼλ��
		char *end = start;//���ʵĽ���λ��
		while ((*end != ' ') && (*end != '\0'))//���ӷ�����Ϊ&&
		{
			end++;//endָ��ո�λ�õĵ�ַ
		}
		swap(start, end - 1);
		//���ʵ���ʼλ��Ϊstart������λ��Ϊ�ո�ǰһ���ַ���end-1��
		if (*end != '\0')
			arr = end + 1;
		//������һ�����ʵ����ú���һ�����ʵĿ�ʼΪ�ո��һ���ַ���end+1��
		else
			arr = end;

	}
}
int main()
{
	char arr[] = "student a am i";
	reverse(arr);//����������̵�����,ֻ������������ȥ�����ô�����Ĵ�С
	printf("%s\n", arr);
	system("pause");
	return 0;
}
