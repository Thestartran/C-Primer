#include<stdio.h>
int main()
{
	int max(int x,int y);
	int a[10],i;
	int m = a[0],n = 0;
	printf("������ʮ������");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);		//���ʮ������ֵ��a��i���� 
	printf("\n");
	for(i=1;i<10;i++)
		 {
		 	if(max(m,a[i])>m)
		 	{	
		 		m=max(m,a[i]);
		 		n=i;
			 }
		 }
		 printf("ʮ�������������ǣ�%d\n���ǵ�%dλ���֡�",m,n+1);
	return 0;
}
	int max(int x,int y)
	{
		return (x>y? x:y);
	}
