#include <stdio.h>
int main()
{
	int i;
	int sum = 0;
	for (i=1;i<=5;i+=2)		//i+=2�ȼ���i=i+2
		{
			sum=sum+i;
			printf("******");	//���ô�ӡ������ִ��ѭ���Ĵ������ô�����������
		}	
	printf("i=%d\n",i);
	printf("sum=%d\n,sum");
		 
}