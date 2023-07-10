#include <stdio.h>
int main ()
{
	int i,sum = 0;
	for (i=3;i<=12;i++)//如果i能被3整除 
	{
		if(i%3==0)
			sum=sum+i;
	}
	printf("sum=%d\n",sum);
	return 0;

}
