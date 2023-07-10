#include <stdio.h>
#include <string.h>
int main() 
{ 
	char str1[100], str2[100], result[200]; 
	printf("请输入第一个字符串："); 
	scanf("%s", str1); 
	printf("请输入第二个字符串："); 
	scanf("%s", str2); 
	strcpy(result, str1); //使用 strcpy 函数将 str1 的内容复制到 result 中 
	strcat(result, str2); //使用 strcat 函数将 str2 连接到 result 末尾
	printf("连接后的字符串为：%s\n", result); 
	return 0; 
}
