#include<stdio.h>
//枚举常量enum
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};
//MALE,FEMALE,SECRET称为枚举常量 
int main()
{
	printf("%d\n",MALE);
	printf("%d\n",FEMALE);
	printf("%d\n",SECRET);
	return 0;
 } 
//运行结果为0,1,2.   第一个默认赋值为0，随后递增 
