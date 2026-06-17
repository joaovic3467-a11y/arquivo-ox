#include <stdio.h>



{
    if (c == 'X' || c == 'O')
        return 1;

    return 0;
}

void gravar(char matriz[3][3], char nomeArquivo[])
{
    FILE *arquivo;

    arquivo = fopen(nomeArquivo, "w");

    if (arquivo == NULL)
    {
        printf("Erro ao criar arquivo\n");
        return;
    }

    fprintf(arquivo, "| %c | %c | %c |\n",
            matriz[0][0], matriz[0][1], matriz[0][2]);

    fprintf(arquivo, "| %c | %c | %c |\n",
            matriz[1][0], matriz[1][1], matriz[1][2]);

    fprintf(arquivo, "| %c | %c | %c |\n",
            matriz[2][0], matriz[2][1], matriz[2][2]);

    fprintf(arquivo, "\n");
    fprintf(arquivo, "Criado por João victor silva sousa");

    fclose(arquivo);
}
