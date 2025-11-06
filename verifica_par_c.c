#include <stdio.h>

int main()
{
    // Declara e inicializa a variavel
    int numero = 0;

    // Solicita ao usuario que digite um numero inteiro
    printf("digite um numero inteiro: ");


    // estrutura de repeticao para verificar se o numero e par ou impar
    do
    {

        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            printf("numero e par\n");
        }
        else
        {
            printf("numero e impar\n");
        }
    } while (numero != 0);

    printf("Verificacao encerrada. \n");
    
        return 0;
}