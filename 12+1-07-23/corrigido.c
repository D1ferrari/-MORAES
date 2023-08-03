#include <stdio.h>

#define TAMANHO_ESTOQUE 100

typedef struct {
    char nome[50];
    int codigo;
    float preco;
    int quantidade;
} Produto;

Produto estoque[TAMANHO_ESTOQUE]; // Array para armazenar os produtos
int totalProdutos = 0; // Contador para o número total de produtos registrados

void registrarEntrada() {
    printf("Informe o nome do produto: ");
    scanf("%s", estoque[totalProdutos].nome);

    printf("Informe o código do produto: ");
    scanf("%d", &estoque[totalProdutos].codigo);

    printf("Informe o preço do produto: ");
    scanf("%f", &estoque[totalProdutos].preco);

    printf("Informe a quantidade do produto: ");
    scanf("%d", &estoque[totalProdutos].quantidade);

    totalProdutos++; // Incrementa o contador de produtos
}

void registrarVenda() {
    int codigoProduto;
    int i; // Variável i declarada no início da função
    printf("Informe o código do produto: ");
    scanf("%d", &codigoProduto);

    int indiceProduto = -1; // Índice do produto no estoque, inicializado como -1 para indicar que o produto não foi encontrado
    for (i = 0; i < totalProdutos; i++) {
        if (estoque[i].codigo == codigoProduto) {
            indiceProduto = i; // Atualiza o índice do produto encontrado
            break;
        }
    }

    if (indiceProduto != -1) {
        if (estoque[indiceProduto].quantidade > 0) {
            printf("Produto disponível! Realize o registro da venda.\n");
            estoque[indiceProduto].quantidade--; // Reduz a quantidade do produto em estoque
        } else {
            printf("Produto esgotado!\n");
        }
    } else {
        printf("Produto não encontrado!\n");
    }
}

void gerarRelatorio() {
    int i; // Variável i declarada no início da função
    for (i = 0; i < totalProdutos; i++) {
        printf("Nome: %s\n", estoque[i].nome);
        printf("Código: %d\n", estoque[i].codigo);
        printf("Quantidade: %d\n", estoque[i].quantidade);
        printf("-----------------------------\n");
    }
}

int main() {
    int opcao;
    do {
        printf("===== MENU =====\n");
        printf("1. Registrar entrada de produto\n");
        printf("2. Registrar venda de produto\n");
        printf("3. Gerar relatório de estoque\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                registrarEntrada();
                break;
            case 2:
                registrarVenda();
                break;
            case 3:
                gerarRelatorio();
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    } while (opcao != 4);

    return 0;
    
}