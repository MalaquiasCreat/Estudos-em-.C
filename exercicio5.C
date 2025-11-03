#include <stdio.h>

int main()
{
    // declara a variavel
    int idade;

    // pede ao usuario para digitar a idade
    printf("Digite sua idade: ");

    // le a idade digitada
    scanf("%d", &idade);

    printf("Sua idade: %d anos", idade);

    return 0;
}