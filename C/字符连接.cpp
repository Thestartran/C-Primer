#include <stdio.h>
#include <string.h>
int main() 
{ 
	char str1[100], str2[100], result[200]; 
	printf("�������һ���ַ�����"); 
	scanf("%s", str1); 
	printf("������ڶ����ַ�����"); 
	scanf("%s", str2); 
	strcpy(result, str1); //ʹ�� strcpy ������ str1 �����ݸ��Ƶ� result �� 
	strcat(result, str2); //ʹ�� strcat ������ str2 ���ӵ� result ĩβ
	printf("���Ӻ���ַ���Ϊ��%s\n", result); 
	return 0; 
}
