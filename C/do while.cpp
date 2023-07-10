/*
编写程序,用 do…while 循环求 1+2+3+…+50 的
值并输出。
*/
#include<stdio.h>
int main()
{
	int sum =  0,i = 1;
	do{
		sum = sum + i;
		i++;
	}while(i<=50);
	printf("1+2+3+...+50=%d\n",sum);
	return 0;
}
