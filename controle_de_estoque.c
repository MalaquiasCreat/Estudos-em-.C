#include <stdio.h>
#include <string.h>

// Definições globais
#define MAX_PRODUTOS 50

typedef struct
{
    int codigo;
    char nome[50];
    int quantidade;
    float preco;
} Produto;

// Funções
void cadastrarProduto(Produto estoque[], int *total)
{
    if (*total >= MAX_PRODUTOS)
    {
        printf("Limite de produtos atingido!\n");
        return;
    }

    Produto p;
    printf("Codigo do produto: ");
    scanf("%d", &p.codigo);
    printf("Nome: ");
    scanf("%s", p.nome);
    printf("Quantidade: ");
    scanf("%d", &p.quantidade);
    printf("Preço: ");
    scanf("%f", &p.preco);

    estoque[*total] = p;
    (*total)++;

    printf("Produto %s cadastrado com sucesso!\n", p.nome);
}

void listarProdutos(Produto estoque[], int total)
{
    if (total == 0)
    {
        printf("Nenhum produto cadastrado.\n");
        return;
    }

    printf("\n*** Lista de Produtos ***\n");
    for (int i = 0; i < total; i++)
    {
        printf("Codigo: %d | Nome: %s | Quantidade: %d | Preço: R$%.2f\n",
               estoque[i].codigo, estoque[i].nome, estoque[i].quantidade, estoque[i].preco);
    }
}

void buscarProduto(Produto estoque[], int total)
{
    int codigo;
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    for (int i = 0; i < total; i++)
    {
        if (estoque[i].codigo == codigo)
        {
            printf("Produto encontrado: %s | Quantidade: %d | Preço: R$%.2f\n",
                   estoque[i].nome, estoque[i].quantidade, estoque[i].preco);
            return;
        }
    }
    printf("Produto nao encontrado.\n");
}

void atualizarEstoque(Produto estoque[], int total)
{
    int codigo, novaQuantidade;
    printf("Digite o codigo do produto para atualizar: ");
    scanf("%d", &codigo);

    for (int i = 0; i < total; i++)
    {
        if (estoque[i].codigo == codigo)
        {
            printf("Nova quantidade: ");
            scanf("%d", &novaQuantidade);
            estoque[i].quantidade = novaQuantidade;
            printf("Estoque atualizado com sucesso!\n");
            return;
        }
    }
    printf("Produto nao encontrado.\n");
}

void removerProduto(Produto estoque[], int *total)
{
    int codigo;
    printf("Digite o codigo do produto para remover: ");
    scanf("%d", &codigo);

    for (int i = 0; i < *total; i++)
    {
        if (estoque[i].codigo == codigo)
        {
            for (int j = i; j < *total - 1; j++)
            {
                estoque[j] = estoque[j + 1];
            }
            (*total)--;
            printf("Produto removido com sucesso!\n");
            return;
        }
    }
    printf("Produto nao encontrado.\n");
}

// Função principal
int main()
{
    Produto estoque[MAX_PRODUTOS];
    int total = 0;
    int opcao;

    do
    {
        printf("\n*** SISTEMA DE CONTROLE DE ESTOQUE ***\n");
        printf("1. Cadastrar produto\n");
        printf("2. Listar produtos\n");
        printf("3. Buscar produto\n");
        printf("4. Atualizar quantidade\n");
        printf("5. Remover produto\n");
        printf("6. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            cadastrarProduto(estoque, &total);
            break;
        case 2:
            listarProdutos(estoque, total);
            break;
        case 3:
            buscarProduto(estoque, total);
            break;
        case 4:
            atualizarEstoque(estoque, total);
            break;
        case 5:
            removerProduto(estoque, &total);
            break;
        case 6:
            printf("Saindo do sistema...\n");
            break;
        default:
            printf("Opçao invalida!\n");
        }
    } while (opcao != 6);

    return 0;
}
