/*
2����֪Բ�İ뾶 r=3.1�������Բ���ܳ��������
����������������λС������
*/
#include<stdio.h>
#define a 3.14
int main()
{
	float r,c,s;
	printf("intput r:\n");
	scanf("%f",&r);
	if(r>0)
	{
		c = 2*a*r;
		s = a*r*r;
		printf("Բ���ܳ�C=%.3f,Բ�����S=%.3f\n",c,s);
	}
	else
	{
		printf("��������ݴ������������룺\n");
	}
	return 0;
}
