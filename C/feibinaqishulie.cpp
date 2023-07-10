/*
9．编写程序，求 Fibonacci(斐波那契)数列的前 20
个数。
斐波那契数列有如下特点:第 1，2 两个数为 1，1。从
第 3 个数开始，该数是其前面两个数之和。即该数列
为 1,1,2,3,5,8,13,…用数学方式表示为:
*/
#include<stdio.h>
int main()
{
	int f1 = 1,f2 = 1,f3;
	int i;
	printf("%12d\n%12d\n",f1,f2);
	for(i=1;i<=20;i++)
	{
		f3 = f1 + f2;
		printf("%12d\n",f3);
		f1 = f2;
		f2 = f3;
	}
	return 0;
}
