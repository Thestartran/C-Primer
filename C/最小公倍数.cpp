#include<stdio.h>
int main()
{
	int a,b,r,m,temp;
	printf("����������������");
	scanf("%d%d",&a,&b);
	m = a*b;
	if(a<b)
	{
		temp = a;
		a = b;
		b = temp;
	} 
	while(b!=0)
	{
		r = a%b;
		a = b;
		b = r;
	}
	printf("��С�������ǣ�%d",m/a);
	return 0;
 } 
