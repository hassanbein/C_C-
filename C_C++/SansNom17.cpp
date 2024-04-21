#include <stdio.h>
#include <math.h>
#define N 40
int main()
{
	FILE *p = NULL;
	float pi = 3.14159;
	float Sine[N] = {0}, Sine1[N] = {0}, Sine2[N] = {0};
	for (int i = 0; i < N; i++)
	{
		Sine1[i] = sin((pi * i) / 20) + sin((3 * pi * i) / 20) / 3;
		Sine2[i] = sin((pi * i) / 4) / 5 + sin((7 * pi * i) / 20) / 7 + Sine1[i];
		Sine[i] = 4 * (sin(9 * pi * i / 20) / 9 + Sine2[i]) / pi;
	}
	short sin[N];
	for (int i = 0; i < N; i++)
		sin[i] = Sine[i];
	for (int i = 0; i < N; i++)
	{
		printf("%i\n", sin[i]);
	}
	p = fopen("hassan.nb", "a");
	for (int i = 0; i < N; i++)
	{
		fprintf(p, "%i,", sin[i]);
	}
	// printf("%f",1000*sin((pi)/4));
	return 0;
}
