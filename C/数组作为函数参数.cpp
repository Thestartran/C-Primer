#include<stdio.h>
int main()
{
	int max(int x,int y);
	int a[10],i;
	int m = a[0],n = 0;
	printf("请输入十个数：");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);		//输出十个数赋值给a【i】； 
	printf("\n");
	for(i=1;i<10;i++)
		 {
		 	if(max(m,a[i])>m)
		 	{	
		 		m=max(m,a[i]);
		 		n=i;
			 }
		 }
		 printf("十个数中最大的数是：%d\n它是第%d位数字。",m,n+1);
	return 0;
}
	int max(int x,int y)
	{
		return (x>y? x:y);
	}
