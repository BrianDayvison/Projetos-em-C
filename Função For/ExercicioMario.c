#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

  int i, j,x, n;

    printf ("digite a quantidade de bloco da piramide: ");
    scanf ("%d", &n);

    for (i= 1; i <= n; i++)
    {
        for (x = n - i; x>=1; x--)
        {
            printf (" ");
        }
        for (j=1;j<=i;j++)
            printf ("#");

        printf ("\n");
    }

}
