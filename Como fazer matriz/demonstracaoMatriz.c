#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

int matriz [3][3];
int i,j;

    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("Insira elemento da linha %d, coluna %d:", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("O elemento da linha %d, coluna %d é: %d\n", i, j, matriz[i][j]);
        }
    }

    printf ("matriz:\n %d,%d,%d \n %d,%d,%d \n %d,%d,%d \n", &matriz[0][0],&matriz[0][1],&matriz[0][2],&matriz[1][0],&matriz[1][1],&matriz[1][2]);


return (0);
}
