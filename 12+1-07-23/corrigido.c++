#include <iostream>
#include <string>
#define TAMANHO_ESTOQUE 100

struct Produto {
    std::string nome;
    int codigo;
    float preco;
    int quantidade;
};

Produto estoque[TAMANHO_ESTOQUE]; // Array para armazenar os produtos
int totalProdutos = 0; // Contador para o número total de produtos registrados

void registrarEntrada() {
    std::cout << "Informe o nome do produto: ";
    std::cin >> estoque[totalProdutos].nome;
    std::cout << "Informe o código do produto: ";
    std::cin >> estoque[totalProdutos].codigo;
    std::cout << "Informe o preço do produto: ";
    std::cin >> estoque[totalProdutos].preco;
    std::cout << "Informe a quantidade do produto: ";
    std::cin >> estoque[totalProdutos].quantidade;
    totalProdutos++; // Incrementa o contador de produtos
}

void registrarVenda() {
    int codigoProduto;
    int i; // Variável i declarada no início da função
    std::cout << "Informe o código do produto: ";
    std::cin >> codigoProduto;
    int indiceProduto = -1; // Índice do produto no estoque, inicializado como -1 para indicar que o produto não foi encontrado
    for (i = 0; i < totalProdutos; i++) {
        if (estoque[i].codigo == codigoProduto) {
            indiceProduto = i; // Atualiza o índice do produto encontrado
            break;
        }
    }
    if (indiceProduto != -1) {
        if (estoque[indiceProduto].quantidade > 0) {
            std::cout << "Produto disponível! Realize o registro da venda.\n";
            estoque[indiceProduto].quantidade--; // Reduz a quantidade do produto em estoque
        }
        else {
            std::cout << "Produto esgotado!\n";
        }
    }
    else {
        std::cout << "Produto não encontrado!\n";
    }
}

void gerarRelatorio() {
    int i; // Variável i declarada no início da função
    for (i = 0; i < totalProdutos; i++) {
        std::cout << "Nome: " << estoque[i].nome << "\n";
        std::cout << "Código: " << estoque[i].codigo << "\n";
        std::cout << "Quantidade: " << estoque[i].quantidade << "\n";
        std::cout << "-----------------------------\n";
    }
}

int main() {
    int opcao;
    do {
        std::cout << "===== MENU =====\n";
        std::cout << "1. Registrar entrada de produto\n";
        std::cout << "2. Registrar venda de produto\n";
        std::cout << "3. Gerar relatório de estoque\n";
        std::cout << "4. Sair\n";
        std::cout << "Escolha uma opção: ";
        std::cin >> opcao;
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
                std::cout << "Saindo...\n";
                break;
            default:
                std::cout << "Opção inválida!\n";
                break;
        }
    } while (opcao != 4);

    return 0;
}