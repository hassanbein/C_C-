#include <stdio.h>
#include <math.h>
#define N 80000
int main()
{
    FILE* p=NULL;
    double pi=3.14159;
    double f[N];
    for (int i=0;i<N;i++)
    {
        f[i]=(4*sin(pi*i/20))/(pi)+(4*sin(3*pi*i/20))/(3*pi)+(4*sin(pi*i/4))/(5*pi)+(4*sin(7*pi*i/20))/(7*pi)+(4*sin(9*pi*i/20))/(9*pi);
    }
    for (int i=0;i<N;i++)
    {
        printf("%f \n",f[i]);
    }
    p=fopen("hassan1.nb","a");
    fprintf(p,"{");
    for (int i=0;i<N;i++)
    {
        fprintf(p,"%f,",f[i]);
    }
    fprintf(p,"}");
    return 0;
}


