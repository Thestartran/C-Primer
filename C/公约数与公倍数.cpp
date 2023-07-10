//正规写法，辗转相除法 
#include<stdio.h>
//计算最大公约数
int gcd(int a,int b)		 
{
	int r;
	while(b != 0)
	{
		r = a % b;
		printf("a=%d,b=%d,r=%d\n",a,b,r);
		a = b;
		b = r;
	}
	return a;
	
	
	/*while((r = a%b)!= 0)
	{
		a = b;
		b = r;
	}
	return b;*/
	
}
	//计算最小公倍数
int lcm(int a,int b)		 
{
	return (a*b/gcd(a,b));
}
int main()
{
	int a,b;
	printf("请输入两个整数：");
	scanf("%d%d",&a,&b);
	printf("最大公约数是：%d\n",gcd(a,b));
	printf("最小公倍数是：%d\n",lcm(a,b)); 
	return 0;
 } 
