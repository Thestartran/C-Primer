/*
2．已知圆的半径 r=3.1，编程求圆的周长和面积，
并输出结果（保留两位小数）。
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
		printf("圆的周长C=%.3f,圆的面积S=%.3f\n",c,s);
	}
	else
	{
		printf("输入的数据错误，请重新输入：\n");
	}
	return 0;
}
