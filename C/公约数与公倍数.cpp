//����д����շת����� 
#include<stdio.h>
//�������Լ��
int gcd(int a,int b)		 
{
	int r;
	while(b != 0)
	{
		r = a % b;
		printf("a=%d,b=%d,r=%d\n",a,b,r);
		a = b;
		b = r;
	}
	return a;
	
	
	/*while((r = a%b)!= 0)
	{
		a = b;
		b = r;
	}
	return b;*/
	
}
	//������С������
int lcm(int a,int b)		 
{
	return (a*b/gcd(a,b));
}
int main()
{
	int a,b;
	printf("����������������");
	scanf("%d%d",&a,&b);
	printf("���Լ���ǣ�%d\n",gcd(a,b));
	printf("��С�������ǣ�%d\n",lcm(a,b)); 
	return 0;
 } 
