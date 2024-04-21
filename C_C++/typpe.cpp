#include<stdio.h>
int main()
{
	float s=0;
	int i;
	for(i=1;i<=55;i++) s+=(short)1/(0.25*i*i);
	printf("s= %f",s);
	
	
	return 0;
}
