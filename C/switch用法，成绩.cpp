#include<stdio.h>
int main()
{
	int i,max;
	int a[10];
	printf("请输入10个整数：");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	 } 
	 max = a[0]; 
	for(i = 0;i<10;i++)
	{
		if(max<a[i])
		{
			max = a[i];
		}
	}
	printf("最大值是：%d\n",max);
	 return 0;
 } 
