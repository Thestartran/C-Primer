//��n��
#include<stdio.h>
int main()
{
	int i,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  n,result;
	printf("������һ��������15��������");
	scanf("%d",&n);
	for(i = 1;i<=n;i++)
	{
		result = result * i;
	 } 
	printf("%d! = %d\n",n,result);
	return 0;
 } 
