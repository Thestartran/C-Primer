/* 1．编写程序,程序运行时输出以下图形。
****
 ****
  ****
   ****
   */
#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("%s"," ");
		}
		printf("%s\n","****");	
	}
		return 0;
}
