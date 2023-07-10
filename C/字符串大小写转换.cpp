/*
编写程序，从键盘输入一个不长于 10 个字符的字
符串，将其中的小写字母转换成大写字符，其他字符
保持不变，并输出转换后的结果。
*/
#include<stdio.h>
int main()
{
	int i;
	char str[11];
	printf("请输入一个不长于10的字符串: ");
	scanf("%10s",str);
	//遍历字符串，找到小写字母
	for(i = 0;str[i]!='\0';i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	printf("转换后的字符为：%s\n",str);
	return 0; 
}
