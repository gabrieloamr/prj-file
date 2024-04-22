#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo = fopen ("exemplo.txt", "w");
    if (arquivo != NULL) {
        fprintf (arquivo, "Hello World\n");
        fclose (arquivo);
        printf ("texto gravado com sucesso.\n");
    } else {
        printf ("Erro ao abrir o aquivo para escrita.\n");
        return 1;
    }

    arquivo = fopen ("exemplo.txt", "r");
    if (arquivo != NULL) {
        char linha [100];

        while (fgets(linha, sizeof(linha), arquivo) != NULL) {
            printf ("Conteudo lido do arquivo: %s", linha);
        }
        fclose (arquivo);
    } else {
        printf ("Erro ao abrir o arquivo para leitura.\n");
        return 1;
    }

    return 0;
}
