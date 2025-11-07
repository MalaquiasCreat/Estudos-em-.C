#include <stdio.h>

int main()
{
    // Declara e inicializa a variavel
    int numero = 0;
    int opcao = 0;

    // Funcao para verificar se o numero e par ou impar
    void verificaPar(int x)
    {
        if (x % 2 == 0)
        {
            printf("numero e par\n");
        }
        else
        {
            printf("numero e impar\n");
        }
    }

    // estrutura de repeticao para verificar se o numero e par ou impar
    do
    {
        // Solicita ao usuario que digite um numero inteiro
        printf("-------Menu-------\n");
        printf("1.Verificar Numero: \n");
        printf("2.Finalizar\n");
        printf("opcao escolhida: \n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite um numero inteiro ");
            scanf("%d", &numero);
            verificaPar(numero);
            break;
        case 2:
            printf("finalizando...\n");
            break;
        default:
            printf("opacao invalida... \n");
        }

    } while (opcao != 2);

    printf("Verificacao encerrada. \n");

    return 0;
}