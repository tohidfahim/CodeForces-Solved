#include<stdio.h>
#include<math.h>

int main ()
{
    int n, m, a;

    scanf ("%d %d %d", &n, &m, &a);

    printf ("%0.lf\n", ceil(n / (double) a) * ceil (m / (double) a));

    return 0;
}
