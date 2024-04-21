#include <stdio.h>  
#include <math.h>  
#define N 8000
int main()
{  
    FILE* p=NULL;
    float pi=3.14159;
    float f[N];
    
	for (int i=0;i<N;i++)
	{
		f[i]=(4*sin(400*pi*i/8000))/(pi)+(4*sin(1200*pi*i/8000))/(3*pi)+(4*sin(2000*pi*i/8000))/(5*pi)+(4*sin(2800*pi*i/8000))/(7*pi)+(4*sin(3600*pi*i/8000))/(9*pi);
	}
	for (int i=0;i<N;i++)
	{
    printf("%f \n",f[i]);
	}
    p=fopen("hassan.txt","a");
    for (int i=0;i<N;i++)
	{
    fprintf(p,"%f, ",f[i]);
	}
	//!======calcule de xi par la methode simpson=======
	return 0;
}

