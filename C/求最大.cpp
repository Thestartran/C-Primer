#include<stdio.h>
int main()
{
	int i,n,max;
	printf("input 10  numbers:");//������һ��������Ϊ���ֵ����ʼ���� 
	scanf("%d",&max);
	for(i=2;i<=10;i++)//������ʣ�µľ�λ�� 
	{
		scanf("%d",&n);
		if(max<n)//�������������ڳ�ʼֵ��������ֵ��ֵΪ���ֵ 
		{
			max = n;
		}
		
	}
	printf("��������%d",max);
	return 0; 
} 
/*#include<stdio.h>
int main()
{
	int i,max;
	int a[10];
	printf("������10��������");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	 } 
	 max = a[0];
	for(i = 0;i<10;i++)
	{
		if(max<a[i])
		{
			max = a[i];
		}
	}
	pritnf("���ֵ�ǣ�",max);
	 return 0;
}
���ú�����
int max(int a,int b);
{
	return a>b? a:b;
} */
