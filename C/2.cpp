/*
17．求方程 ax2+bx+c=0 的根。a,b,c 由键盘输入，设
b^2-4ac＞0 且 a≠0。
*/
#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,delta,x1,x2;
	printf("请输入二次方程的系数a,b,c：\n");
	scanf("%lf %lf %lf",&a,&b,&c);
	delta = b*b - 4*a*c;
	if(delta>0 && a!= 0)
	{
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		printf("二次方程的解为 x1 = %lf,x2 = %lf\n",x1,x2);		
	}
	else
		printf("无实数解！\n");
	return 0;
}

