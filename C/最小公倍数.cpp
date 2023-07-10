#include<stdio.h>
int main()
{
	int a,b,r,m,temp;
	printf("请输入两个整数：");
	scanf("%d%d",&a,&b);
	m = a*b;
	if(a<b)
	{
		temp = a;
		a = b;
		b = temp;
	} 
	while(b!=0)
	{
		r = a%b;
		a = b;
		b = r;
	}
	printf("最小公倍数是：%d",m/a);
	return 0;
 } 
