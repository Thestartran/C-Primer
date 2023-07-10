/*水仙花数是指一个三位数，其每位数字的立方和等于该数本身。
例如：153是一个“水仙花数”，因为153=1的三次方+5的三次方+
3的三次方。*/
/*可以利用for循环控制100-900个数，每个数分解出个位，十位，百位，
 再分别求立方相加*/
 #include<stdio.h>
 #include<stdlib.h>
 int main(){
 	int n,b,s,g,sumb,sums,sumg;
 	printf("100-1000包含的水仙花数分别有：\n");
 	for(n=100;n<1000;n++)
 	{
 		b=n/100;
 		s=n/10%10;
 		g=n%10;
 		sumb=b*b*b;
 		sums=s*s*s;
 		sumg=g*g*g;
 		if(n==sumb+sums+sumg){
 			printf("%d\n",n);		 }
	 }
 	return 0;
 } 
