/*
19．编程从键盘输入两个正整数，计算并输出这两个
数的最大公约数（易懂写法，常规） 
*/
#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("请输入两个整数：");
	scanf("%d%d",&a,&b);
	//默认a>b，如果a<b，则互换位置 
	if(a<b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	for(int i=b;i>0;i--)			 	//这时把从1-b（b也就是较小的那个数）遍历数字，是倒序，从大往小 
	{
		if(a%i == 0 && b%i == 0)	//如果 遇到的第一个能被a和b同时除尽的数，那么这个数就是ab的最大公约数 
		{
			printf("这两个数的最大公约数是：%d",i);
		}
		break;
	}	
	 return 0;
	
 } 
