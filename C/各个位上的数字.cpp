/*
��д������ 100��200 ֮���λ����֮��Ϊ 6
����������������������
���λ��bai=i/100;
��ʮλ��shi=(i/10)%10;
���λ��ge=i%100�� 
*/
#include<stdio.h>
int main()
{
	int i,ge,shi,bai;
	for(i=100;i<=200;i++)
	{
		bai = i/100;
		shi = (i%10)/10;
		ge = i%100;
		if(ge+shi+bai==6)
			printf("%d ",i) ;
	}
	printf("\n");
	return 0;
 } 
