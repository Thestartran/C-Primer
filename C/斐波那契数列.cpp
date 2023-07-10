# include <stdio.h>
int main()
{
	int f1=1,f2=1;
	int i;
	for(i=1;i<=20;i++)
	{
		printf("%18d%18d",f1,f2);//此种方法运行效率高，一次打印两个数字 
		if(i%2==0)//输入两次也就是4个数换行 
		printf("\n");
		f1 = f1 + f2;//这里赋值语句简洁 
		f2 = f2 + f1;
		 
	}
	return 0;
}
