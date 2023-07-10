/*
18．编写程序，输入一个字符，判别它是否为大写字
母，并输出结果。（‘A’对应的 ASCII 码为 65）
*/
#include<stdio.h>
int main()
{
	char c;
	printf("请输入一个字母："); 
	scanf("%c",&c);
	if(c>=65 && c<=90)			//大写字母的范围是 65-95
		printf("%c是大写字母\n",c);
	else
		printf("%c不是大写字母\n",c);
	printf("%d\n",c);
	return 0;
}
