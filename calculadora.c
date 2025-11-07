#include <stdio.h>

int main()
{

    float soma(int num1, int num2)
    {
        return num1 + num2;
    }

    int subtrai(int num1, int num2)
    {
        return num1 - num2;
    }

    int multiplica(int num1, int num2)
    {
        return num1 * num2;
    }

    float divide(float num1, float num2)
    {
        if (num2 == 0)
        {
            printf("o denominador nao pode ser zero\n");
            return 0;
        }
        else
        {
            return num1 / num2;
        }
    }

    int numerador = 0;
    int denomi = 0;
    int opcao = 0;
    float resultado = 0.0;

    do
    {
        printf("***escolha uma operacao***\n");
        printf("1.adicao: \n");
        printf("2.subtracao:\n");
        printf("3.multiplicacao: \n");
        printf("4.divisao: \n");
        printf("5.Finalizar: \n");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4)
        {
            printf("digite o primeiro numero: \n");
            scanf("%d", &numerador);

            printf("digite o segundo numero: \n");
            scanf("%d", &denomi);
        }

        switch (opcao)
        {
        case 1:
            resultado = soma(numerador, denomi);
            printf("o resultado e: %.2f\n", resultado);
            break;

        case 2:
            resultado = subtrai(numerador, denomi);
            printf("o resultado e: %.2f\n", resultado);
            break;

        case 3:
            resultado = multiplica(numerador, denomi);
            printf("o resultado e: %.2f\n", resultado);
            break;

        case 4:
            resultado = divide(numerador, denomi);
            printf("o resultado e: %.2f\n", resultado);
            break;

        case 5:
            printf("finalizando...\n");
            break;

        default:
            printf("opacao invalida... \n");
        }
    } while (opcao != 5);

    printf("operacao encerrada\n");

    return 0;
}