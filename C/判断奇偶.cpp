/*
3．编写程序，从键盘上输入一个正整数 n，判断
其是奇数还是偶数，并输出结果。
*/
#include<stdio.h>
int main()
{
	int n;
	printf("请输入一个正整数：");
	scanf("%d",&n);
	if(n % 2 == 0)
		printf("%d是偶数",n);
	else
		printf("%d是奇数",n); 
	return 0; 
}
