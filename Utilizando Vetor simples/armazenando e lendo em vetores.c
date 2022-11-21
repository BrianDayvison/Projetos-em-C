#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[5], i;

    for (i=0; i<5; i++){
        printf ("digite um valor: ");
        scanf ("%d", &vet[i]);
    }
    printf ("imprimindo o vetor lido:\n");
    for (i=0; i<5; i++){
        printf ("%d = %d\n", i, vet[i]);
    }
    return 0;
}
