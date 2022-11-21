#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main (){
    int valor, i;
        srand(time(NULL));

  for (i=0; i<10; i++)
    {
        valor=rand()%100;

        printf("%d\n",  valor);
    }
    return 0;
}
