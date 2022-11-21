#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int matrizA[10][20];
  int i, j;

    for (i=1;i<=2;i++)
    {
        for (j=1;j<=5;j++)
        {
            printf("Insira elemento da linha %d, coluna %d:", i, j);
            scanf("%d", &matrizA[i][j]);

        }

    }
    for (i=1;i<=2;i++)
    {
        for (j=1;j<=5;j++)
        {
            printf("O elemento da linha %d, coluna %d é: %d\n", i, j, matrizA[i][j]);
        }
    }
	return(0);
}
