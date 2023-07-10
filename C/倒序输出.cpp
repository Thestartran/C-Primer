#include<stdio.h>
int main()
{
	int digital,num;
	printf("请输入一个整数：");
	scanf("%d",&num);
	printf("倒序输出后的数为：");
	while (num>0)
	{
		digital = num % 10;//取最后一位数字
		printf("%d",digital);
		num = num / 10;//去掉最后一位数字 
	}
	printf("\n");
	return 0; 
}
