/*
5����д�����ҳ� 300~400 ֮�����в��ܱ� 5 ��
7 ͬʱ���������������
*/
#include<stdio.h>
int main()
{
	int n;
	for(n=300;n<=400;n++)
	{
		if(n%5==0&&n%7==0)
		continue;
		printf("%d\n",n);
	}
	printf("\n");
	return 0;
 } 
