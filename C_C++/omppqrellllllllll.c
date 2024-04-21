#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <string.h>

#define M 20

// pour windows
// double get_time(){ return ((double) clock())/CLOCKS_PER_SEC;}

// pour linux
double get_time()
{
    struct timeval tv;
    gettimeofday(&tv, (void *)0);
    return (double)tv.tv_sec + tv.tv_usec * 1e-6;
}

void remplir_matrice(double Mat[M][M])
{
    int i, j;
    for (i = 0; i < M; i++)
        for (j = 0; j < M; j++)
        {
            Mat[i][j] = (double)rand() / (double)RAND_MAX;
        }
}

void afficher_matrice(double Mat[M][M])
{
    int i, j;
    printf("\n===> matrice  <===\n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
            printf("%f", Mat[i][j]);
        printf("\n");
    }
}

double calcul_prod_mat(double P[M][M],
                       double A[M][M],
                       double B[M][M],
                       int nb_threads)
{
    int i, j, k;
    double start, stop;
    double cpu_time_used;

    start = get_time();

    for (i = 0; i < M; i++)
        for (j = 0; j < M; j++)
        {
            P[i][j] = 0;
            for (k = 0; k < M; k++)
                P[i][j] += A[i][k] * B[k][j];
        }

    stop = get_time();
    cpu_time_used = stop - start;
    return cpu_time_used;
}

int main(int argc, char **argv)
{
    double A[M][M];
    double B[M][M];
    double P[M][M];
    int nb;
    double t = 0.0;

    srand(time(NULL));

    remplir_matrice(A);
    afficher_matrice(A);
    remplir_matrice(B);
    afficher_matrice(A);

    system("Pause");

    printf("Nb.threads\tTps.\n");
    for (nb = 1; nb <= 12; nb++)
    {
        t = calcul_prod_mat(P, A, B, nb);
        printf("%d \t %f\n ", nb, t);
    }
    afficher_matrice(P);
    system("Pause");
    return (EXIT_SUCCESS);
}