#include<stdio.h>
int main(){
	int i=0,s=0;
	do{
		if(i%2)	{			//可以看做是i除以2的余数是否为0，如果余数为0，则代表这个语句是假的就不执行if语句里面的句子； 
		i++;
		continue;			//continue代表继续执行这个循环语句；如果没有continue则不会继续执行循环语句；
		}
		i++;
		s+=i;	//s=s+i;
	}while(i<5)	;			//也就是continue会跳到这里 
	printf("%d\n",s); 
	return 0;
}

