/*#include<stdio.h>
int main()
{
	int i,n = 1;
	for(i=1;i<=1000;i++)
	{
		if(i % 3 == 1 && i%5 == 2 && i % 7 == 3)
		{
			printf("%d ",i);		//把%d后面加空格就可以分开数字 
		}
		if(n++ % 5==0)
			printf("\n"); 
		
	}
	printf("\n");
	return 0;
}*/
#include <stdio.h>
int main()
{
    int i, n = 0;
    for (i = 1; i <= 1000; i++)
    {
        if (i % 3 == 1 && i % 5 == 2 && i % 7 == 3)
        {
            printf("%d ", i); 
        	n++;        				//效率高，把n放进if里面，下面的if打印也要放进内层，否则就换好几行 
		if (n % 5 == 0){
        	printf("\n");
			}
  		}
    }
    printf("\n");
    return 0;
}
