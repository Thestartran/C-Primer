/*
�ж�һ�����Ƿ�Ϊ������ֻ�轫n��2-n/2�����������ɣ�����ֻ��Ҫ��2-����2
��������ȥ���ɡ����������Դ�����ѭ�����������ִ��Ч�ʡ� 
Ϊ���㣬���Զ���һ�����ͱ���k����Ϊ����n�� 
���n���ܱ�2-k������һ��������������������һ��ѭ����i��Ҫ��1�� 
���i=k+1��Ȼ�����ֹѭ������ѭ��֮���б�i��ֵ�Ƿ���ڻ��ߵ���k+1��
���ǣ������δ����2-k��һ���������������������������� 
*/ 
#include<stdio.h>
#include<math.h> 
int main()
{
	int n,i,k;
	printf("please erter an integer number:n = ");
	scanf("%d",&n);
	k = sqrt(n);
	for(i=2;i<=k;i++)
		if(n%i==0)
		break;
	if(i<=k) 
		printf("%d is not a prime number.\n",n);
	else 
		printf("%d is a prime number.\n",n);
		 
	
	return 0;
 } 
