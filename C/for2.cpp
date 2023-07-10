#include <stdio.h>
int main()
{
	int i;
	int sum = 0;
	for (i=1;i<=5;i+=2)		//i+=2等价于i=i+2
		{
			sum=sum+i;
			printf("******\n");	//利用打印，看出执行循环的次数。用大括号括起来
		}	
	printf("i=%d\n",i);
	printf("sum=%d\n",sum);
		 
}

/*运行结果     此算法也可以求0-？的奇数之和 
******
******
******
i=7
sum=9
*/
