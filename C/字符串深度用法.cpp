#include<stdio.h>
#include<string.h>
int main()
{
	char *arr3;
	char arr1[] = "abc";
	char arr2[] = {'a','b','c'};
	//arr3 = {'z','x','c'};
	//�����ĸ�ֵ�ǲ�����ģ���Ϊ�ַ�ָ�����ֻ�ܴ洢һ����ַ�������ܴ洢һ���������ڴ�ռ䡣
	//���� arr3 ��һ���ַ�ָ����������� sizeof(arr3) �Ľ���� 1����ʾ��ָ�����ռ�õ��ڴ�ռ��С��ͨ���� 1 ���ֽڡ�
	arr3 = "zxc";
	printf("%s\n",arr1);
	printf("%s\n",arr2);
	printf("%s\n",arr3);
	printf("%d\n",sizeof(arr3));
	//�ڴ�ӡ arr3 �ĳ���ʱ������ʹ���� sizeof ������������������������ܼ����һ���ַ�ָ��ָ����ַ����ĳ��ȣ�
	//���Ǽ�������ָ�뱾��ĳ��ȣ�ͨ���� 4 �� 8 ���ֽڣ�ȡ���ڱ������Ͳ���ϵͳ����
	//��ˣ�sizeof(arr3) �Ľ���� 8�������� 4��
	printf("%d\n",strlen(arr1));
	printf("%d\n",strlen(arr2)); 
	printf("%d\n",strlen(arr3));
	return 0;
 } 
