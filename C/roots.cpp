
#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,d,p,q,x1,x2;
	scanf("%lf,%lf,%lf",&a,&b,&c);
	if(fabs(a)<=1e-6)				//第一个if判断当a=0时，也就是a的绝对值还小于等于这个很小的数，那么视为a=0，不为一元二次方程	//1e-6为10的6次方，认为是很小的数，由于d为实数，所以不能简单的认为d=0，存在误差，判断的方法是d的绝对值是否小于一个很小的数。 
		printf("不是二元一次方程\n");
	else							//这个else视为当a！=0时的情况，分为两种； 
	{
		d = b*b - 4*a*c;
		if(fabs(d)<=1e-6)			//a不等于0时，判断d的值，是否有解；这个d的值近似为0； 
			printf("方程有两个相等的实根：%8.4f\n",-b/(2*a));
		else 
		    if(d>1e-6)				//d>0时，有两个不相等的解 
			{
				x1=(-b+sqrt(d))/(2*a);
				x2=(-b-sqrt(d))/(2*a);
				printf("有两个不相等的实根：%8.4f and %8.4f\n",x1,x2); 
			}
			else					//d<0时，有两个共轭复根 
			{
				p=-b/2*a;
				q=sqrt(-d)/(2*a);
				printf("有两个共轭复根：\n");
				printf("%8.4f+%8.4fi\n",p,q);
				printf("%8.4f-%8.4fi\n",p,q);
			}
			
	}
	 return 0;
	 
 } 
