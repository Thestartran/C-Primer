/*
判断一个数是否为素数，只需将n被2-n/2的整数除即可，甚至只需要被2-根号2
的整数除去即可。这样做可以大大减少循环次数，提高执行效率。 
为方便，可以定义一个整型变量k，即为根号n； 
如果n不能被2-k的任意一整数整除，则在完成最后一次循环后，i还要加1， 
因此i=k+1，然后才终止循环。在循环之后判别i的值是否大于或者等于k+1，
若是，则表明未曾被2-k任一整数整除过，因此输出该数是素数 
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
