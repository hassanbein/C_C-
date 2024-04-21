#include<stdio.h>
int main()
{
    int *p;
    const int x=10;
    p=&x;
	*p=50;
    printf("x=%d",x);
}
