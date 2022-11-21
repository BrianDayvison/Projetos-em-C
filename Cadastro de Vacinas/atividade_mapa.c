#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100
//Aluno: Brian Dayvison Soares de Souza
//RA:22019351-5
struct covid
{
 int codigo;
 char nome[50];
 char cpf[15];
 char vacina[15];
 char data[15];
 char lote[15];
};

int main()
{
    struct covid ficha[TAM];
    int i, j, acha, op;
    char buscar[15];
    i = 0;
    j = 0;
    op = 0;
    while (op !=4)
    {
        system("cls");
        printf("1 - Cadastrar vacina\n");
        printf("2 - Listar cadastrados\n");
        printf("3 - Consultar por cpf\n");
        printf("4 - Sair\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &op);
        fflush(stdin);

        if (op == 1)
        {
            system("cls");
                ficha[i].codigo = i;
                printf("\nDigite o cpf do paciente: ");
                gets(ficha[i].cpf);
                fflush(stdin);
                printf("Digite o nome do paciente: ");
                gets(ficha[i].nome);
                fflush(stdin);
                printf("Digite o nome da vacina: ");
                gets(ficha[i].vacina);
                fflush(stdin);
                printf("Digite a data: ");
                gets(ficha[i].data);
                fflush(stdin);
                printf("Digite o numero do lote: ");
                gets(ficha[i].lote);
                fflush(stdin);
                printf("\n==================================\n");
                i++;
        }
        else if (op == 2)
            {
                system("cls");
                for (j=0; j < i; j++)
                {
                    printf("\nCodigo: %d\n", ficha[j].codigo);
                    printf("\nNome: %s\n", ficha[j].nome);
                    printf("\nCpf: %s\n", ficha[j].cpf);
                    printf("\nVacina: %s\n", ficha[j].vacina);
                    printf("\nData: %s\n", ficha[j].data);
                    printf("\nLote: %s\n", ficha[j].lote);
                    printf("\n==================================\n");
                }
                system("pause");
            }
            else if (op == 3)
                {
                    system("cls");
                    printf("Digite o cpf que deseja buscar: ");
                    gets(buscar);
                    fflush(stdin);
                    j = 0;
                    acha = 0;
                    while ((j < i) && (acha == 0))
                    {
                        if (strcmp(ficha[j].cpf, buscar)==0)
                            acha = 1;
                        else
                            j++;
                    }
                    if (acha == 1)
                    {
                        printf("\nCodigo: %d\n", ficha[j].codigo);
                        printf("\nNome: %s\n", ficha[j].nome);
                        printf("\nCpf: %s\n", ficha[j].cpf);
                        printf("\nVacina: %s\n", ficha[j].vacina);
                        printf("\nDdata: %s\n", ficha[j].data);
                        printf("\nLote: %s\n", ficha[j].lote);
                        printf("\n==================================\n");
                    }
                    else {
                        printf("\n Registro nao encontrado.\n");
                    }
                    system("pause");
                }
    }
	return(0);
}
