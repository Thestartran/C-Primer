/*
编写程序，求 100～200 之间各位数字之和为 6
的所有整数，并输出结果。
求百位：bai=i/100;
求十位：shi=(i/10)%10;
求个位：ge=i%100； 
*/
#include<stdio.h>
int main()
{
	int i,ge,shi,bai;
	for(i=100;i<=200;i++)
	{
		bai = i/100;
		shi = (i%10)/10;
		ge = i%100;
		if(ge+shi+bai==6)
			printf("%d ",i) ;
	}
	printf("\n");
	return 0;
 } 
