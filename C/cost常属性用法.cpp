#include <stdio.h>
int main()
/*{
	int num = 4;
	printf("num = %d\n",num);
	 num = 8;
	printf("num = %d\n",num);
	return 0;
}*/
//这时候发现两个num的值都能打印出来，且是顺序打印 
{
	//加上一个const，所发生的变化
	const int num = 4;  				//const所代表的是修饰常变量，也就是说加上const之后，这个num的值不会变化 
	printf("num = %d\n",num);			//常量是指在程序运行过程中不可修改的值。使用 const 关键字可以将变量声明为常量，从而避免程序中对该变量的误操作
	 num = 8;
	printf("num = %d\n",num);
	return 0;
 } 
 //这时发现不能打印，报错 
