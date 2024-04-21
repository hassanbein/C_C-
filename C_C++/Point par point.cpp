#include <stdio.h>
#include <math.h>
#define N 40
int main()
{
    double pi = 3.14159;
    double f[N];
    for (int i = 0;i < N;i++)
    {
        f[i] = sin(pi * i / 20) + sin(3 * pi * i / 20) / 3 + sin(pi * i / 4) / 5 ;
        f[i]=f[i]+sin(7 * pi * i / 20) / 7 + sin(9 * pi * i / 20) / 9;
        f[i] = 4 * f[i] / pi;
    }
    for (int i = 0;i < N;i++)
    {
        printf("%f\n", f[i]);
    }
    return 0;
}