#include <stdio.h>
int main ()
{
	int i,sum = 0;
	for (i=3;i<=12;i++)//���i�ܱ�3���� 
	{
		if(i%3==0)
			sum=sum+i;
	}
	printf("sum=%d\n",sum);
	return 0;

}
