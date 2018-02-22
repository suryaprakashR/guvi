#include <stdio.h>
int main() 
{
	int value;
	int mul=2;
	scanf("%d",&value);
	while(mul<value)
	{
		mul=mul*2;
		if(mul==value)
		printf("yes");
	}
	if(value==1)
	printf("yes");
	return 0;
}
