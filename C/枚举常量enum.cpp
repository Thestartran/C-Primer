#include<stdio.h>
//ö�ٳ���enum
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};
//MALE,FEMALE,SECRET��Ϊö�ٳ��� 
int main()
{
	printf("%d\n",MALE);
	printf("%d\n",FEMALE);
	printf("%d\n",SECRET);
	return 0;
 } 
//���н��Ϊ0,1,2.   ��һ��Ĭ�ϸ�ֵΪ0�������� 
