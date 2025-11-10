// Sistema de cadastro de alunos

#include <stdio.h>
#include <string.h>

int main()
{

    int opcao = 0;
    char nome[43][50];
    int idade[43];
    float nota[43];
    int total = 0;
    char buscaNome[50];
    int encontrado = 0;

    do
    {

        printf("\n*** SISTEMA DE CADASTRO DE ALUNOS ***\n");
        printf("1. Cadastrar aluno\n");
        printf("2. Listar alunos\n");
        printf("3. Buscar aluno\n");
        printf("4. Finalizar\n");
        printf("Selecione uma opcao: \n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            if (total < 43)
            {
                printf("nome do aluno: \n");
                scanf("%s", &nome[total]);
                printf("idade: \n");
                scanf("%d", &idade[total]);
                printf("nota: \n");
                scanf("%f", &nota[total]);
                printf("Aluno %s cadastrado com sucesso!\n", nome[total], total++);
                printf("Deseja cadastrar outro aluno? se nao, selecione outra opcao\n");
            }
            else
            {
                printf("Limite maximo de alunos por turma atingido!\n");
            }
            break; /* */
        case 2:
            if (total == 0)
            {
                printf("Nenhum aluno cadastrado ainda.\n");
            }
            else
            {
                for (int i = 0; i < total; i++)
                {
                    printf("Aluno %d: Nome: %s, Idade: %d, Nota: %.2f\n", i + 1, nome[i], idade[i], nota[i]);
                }
            }
            break;

        case 3:
        {

            printf("Digite o nome do aluno para buscar: \n");
            scanf("%s", &buscaNome);
            for (int i = 0; i < total; i++)
            {
                if (strcmp(nome[i], buscaNome) == 0)
                {
                    printf("Aluno encontrado: Nome: %s, Idade: %d, Nota: %.2f\n", nome[i], idade[i], nota[i]);
                    encontrado = 1;
                }
            }
            if (!encontrado)
            {
                printf("Aluno nao encontrado.\n");
            }
            break;
        }
        default:
            printf("opcao invalida... \n");
        }
    } while (opcao != 4);

    printf("finalizando...\n");

    return 0;
}