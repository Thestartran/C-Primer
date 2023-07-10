#include<stdio.h>
int main()
{
	int i;
	double sum;
	int sign = 1;
	for(i = 1;i<=100;i++)
	{
		sum = sum + sign*1.0/i;
		sign = -sign;
	}
	printf("1-1/2+1/3-1/4+...+1/99-1/100=%.4f\n",sum);
	return 0;
}
