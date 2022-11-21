#include <stdio.h>
#include <stdlib.h>

int main(){
    int moeda[4], i;

    for (i=0; i<4; i++){
        printf ("digite as moedas em caixa: ");
        scanf ("%d", &moeda[i]);
    }
    printf ("moedas em caixa:\n");
    for (i=0; i<4; i++){
        printf ("%d\n", moeda[i]);
    }
    return 0;
}

