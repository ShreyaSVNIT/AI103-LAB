#include<stdio.h>
int main()
{
	int a=2147483647;
	int b=2147483648;
	int c=-2147483648;
	int d=-2147483649;
	unsigned int as=2147483647;
	unsigned bs=2147483648;
	unsigned cs=2147483650;
	printf("the value of a=%d \n b=%d \n c=%d \n d=%d \n as=%d \n bs=%d \n bs=%d \n cs=%d\n ",a,b,c,d,as,bs,cs);
	return 0;
}
