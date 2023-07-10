/*
5．编写程序，找出 300~400 之间所有不能被 5 和
7 同时整除的数并输出。
*/
#include<stdio.h>
int main()
{
	int n;
	for(n=300;n<=400;n++)
	{
		if(n%5==0&&n%7==0)
		continue;
		printf("%d\n",n);
	}
	printf("\n");
	return 0;
 } 
