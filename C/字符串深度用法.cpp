#include<stdio.h>
#include<string.h>
int main()
{
	char *arr3;
	char arr1[] = "abc";
	char arr2[] = {'a','b','c'};
	//arr3 = {'z','x','c'};
	//这样的赋值是不允许的，因为字符指针变量只能存储一个地址，而不能存储一段连续的内存空间。
	//由于 arr3 是一个字符指针变量，所以 sizeof(arr3) 的结果是 1，表示该指针变量占用的内存空间大小，通常是 1 个字节。
	arr3 = "zxc";
	printf("%s\n",arr1);
	printf("%s\n",arr2);
	printf("%s\n",arr3);
	printf("%d\n",sizeof(arr3));
	//在打印 arr3 的长度时，我们使用了 sizeof 运算符，但是这个运算符并不能计算出一个字符指针指向的字符串的长度，
	//而是计算出这个指针本身的长度，通常是 4 或 8 个字节（取决于编译器和操作系统）。
	//因此，sizeof(arr3) 的结果是 8，而不是 4。
	printf("%d\n",strlen(arr1));
	printf("%d\n",strlen(arr2)); 
	printf("%d\n",strlen(arr3));
	return 0;
 } 
