/*
17���󷽳� ax2+bx+c=0 �ĸ���a,b,c �ɼ������룬��
b^2-4ac��0 �� a��0��
*/
#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,delta,x1,x2;
	printf("��������η��̵�ϵ��a,b,c��\n");
	scanf("%lf %lf %lf",&a,&b,&c);
	delta = b*b - 4*a*c;
	if(delta>0 && a!= 0)
	{
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		printf("���η��̵Ľ�Ϊ x1 = %lf,x2 = %lf\n",x1,x2);		
	}
	else
		printf("��ʵ���⣡\n");
	return 0;
}

