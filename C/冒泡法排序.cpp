#include<stdio.h>
int main()
{
	int i,j,temp;
	int a[8];
	printf("������8��������");
	for(i = 0;i<8;i++)
		
			scanf("%d",&a[i]);
		
	for(j = 0;j<7;j++)
	{
		for(i = 0;i<7-j;i++)
		{
			if(a[i]>a[i+1])
			{
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
	} 
	printf("������֮�������Ϊ��");
	for(i = 0;i<8;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0; 
}
