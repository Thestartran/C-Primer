#include<stdio.h>
int main()
{
	int digital,num;
	printf("������һ��������");
	scanf("%d",&num);
	printf("������������Ϊ��");
	while (num>0)
	{
		digital = num % 10;//ȡ���һλ����
		printf("%d",digital);
		num = num / 10;//ȥ�����һλ���� 
	}
	printf("\n");
	return 0; 
}
