/*
��д������� 100 �������� 8 �ı�����Ҫ����
��ʱÿ 4 ��ռһ�С�
*/
#include<stdio.h>
int main()
{
	int i,count = 0;
	for(i=1;i<100;i++)
	{
		if(i % 8==0)
		{
			printf("%d\t",i);
		
			count++;
		if(count % 4 == 0)		//4��һ���� 
			printf("\n");
		}
	}
	return 0;
}
//����һ��д��
/*#include<stdio.h>
int main()
{
	int i;
	for(i = 8;i<100;i = i + 8)
	{
		printf("%d\t",i);
		if(i % 32 == 0)
		{
			printf("\n");
		}
	}
	return 0;
 }*/ 
