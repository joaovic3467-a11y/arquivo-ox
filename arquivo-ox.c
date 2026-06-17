#include <stdio.h>
#include <stdlib.h>

void gravar(char matriz[3][3], char nomeArquivo[]);

int main(int argc, char *argv[])
{
    char matriz[3][3];
    int i, j;
    int k = 2;

    if (argc != 11)
    {
        printf("Uso: %s arquivo.txt O O O X X X O O O\n", argv[0]);
        return 1;
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            matriz[i][j] = argv[k][0];

            if (!validar(matriz[i][j]))
            {
                printf("Erro: use apenas X ou O\n");
                return 1;
            }

            k++;
        }
    }

    gravar(matriz, argv[1]);

    return 0;
}

int validar(char c)
{
    return (c == 'X' || c == 'O');
}

void gravar(char matriz[3][3], char nomeArquivo[])
{
    FILE *arquivo;
    int i, j;

    arquivo = fopen(nomeArquivo, "w");

    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            fprintf(arquivo, "%c ", matriz[i][j]);
        }
        fprintf(arquivo, "\n");
    }

    fclose(arquivo);
}
