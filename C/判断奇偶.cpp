/*
3����д���򣬴Ӽ���������һ�������� n���ж�
������������ż��������������
*/
#include<stdio.h>
int main()
{
	int n;
	printf("������һ����������");
	scanf("%d",&n);
	if(n % 2 == 0)
		printf("%d��ż��",n);
	else
		printf("%d������",n); 
	return 0; 
}
