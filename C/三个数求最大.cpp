//判断三个数大小，求最大值
#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("输入三个整数：");
	scanf("%d%d%d",&a,&b,&c);
	max = a;
	if(max<b)
	{
		max = b;
	 }
	if(c>max)
	{
		max = c;
	 } 
	 printf("max=%d\n",max);
	 return 0;
 } 
