#include<stdio.h>
int main()
{
	int i,j;
	//int n = 0;
	for(i=1;i<=4;i++)
	{
		
		for(j=1;j<=5;j++)
		{
			printf("%d\t",i*j);
		}
		printf("\n");//经过一个外循环，就换行 
	}
	return 0;
}
#include <stdio.h>
/*第二种写法 
int main()
{
    int i, j, n = 0;
    for (i = 1; i <= 4; i++) // 控制行数
    {
        for (j = 1; j <= 5; j++) // 控制列数
        {
            printf("%d\t", i * j); // 输出元素
            n++; // 计数器加 1
            if (n % 5 == 0) // 如果已经输出了 5 个元素，就换行
            {
                printf("\n");
            }
        }
    }
    return 0; // 程序结束
}
*/
