#include<stdio.h>
int main()
{
	int a=1,b=2;
	printf("Befor swaping : a=%d,b=%d\n",a,b);
	//code to swap 'a' and 'b'
	a=a+b;// a now becomes 3
	b=a-b;// b becomes 1
	a=a-b;// a becomes 2
	printf("After swaping : a=%d, b=%d",a,b);
	return 0;
}
