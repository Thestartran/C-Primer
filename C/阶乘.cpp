//求n！
#include<stdio.h>
int main()
{
	int i,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  n,result;
	printf("请输入一个不大于15的整数：");
	scanf("%d",&n);
	for(i = 1;i<=n;i++)
	{
		result = result * i;
	 } 
	printf("%d! = %d\n",n,result);
	return 0;
 } 
