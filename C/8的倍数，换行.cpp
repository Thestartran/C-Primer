/*
编写程序，输出 100 以内所有 8 的倍数，要求输
出时每 4 个占一行。
*/
#include<stdio.h>
int main()
{
	int i,count = 0;
	for(i=1;i<100;i++)
	{
		if(i % 8==0)
		{
			printf("%d\t",i);
		
			count++;
		if(count % 4 == 0)		//4个一换行 
			printf("\n");
		}
	}
	return 0;
}
//还有一种写法
/*#include<stdio.h>
int main()
{
	int i;
	for(i = 8;i<100;i = i + 8)
	{
		printf("%d\t",i);
		if(i % 32 == 0)
		{
			printf("\n");
		}
	}
	return 0;
 }*/ 
