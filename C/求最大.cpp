#include<stdio.h>
int main()
{
	int i,n,max;
	printf("input 10  numbers:");//先输入一个数，作为最大值（初始化） 
	scanf("%d",&max);
	for(i=2;i<=10;i++)//再输入剩下的九位数 
	{
		scanf("%d",&n);
		if(max<n)//如果输入的数大于初始值，则把这个值赋值为最大值 
		{
			max = n;
		}
		
	}
	printf("最大的数是%d",max);
	return 0; 
} 
/*#include<stdio.h>
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
	pritnf("最大值是：",max);
	 return 0;
}
调用函数：
int max(int a,int b);
{
	return a>b? a:b;
} */
