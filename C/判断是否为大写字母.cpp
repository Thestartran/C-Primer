/*
18����д��������һ���ַ����б����Ƿ�Ϊ��д��
ĸ����������������A����Ӧ�� ASCII ��Ϊ 65��
*/
#include<stdio.h>
int main()
{
	char c;
	printf("������һ����ĸ��"); 
	scanf("%c",&c);
	if(c>=65 && c<=90)			//��д��ĸ�ķ�Χ�� 65-95
		printf("%c�Ǵ�д��ĸ\n",c);
	else
		printf("%c���Ǵ�д��ĸ\n",c);
	printf("%d\n",c);
	return 0;
}
