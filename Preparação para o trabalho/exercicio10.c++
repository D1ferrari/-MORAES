#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<string> palavras = {"computador", "pichau", "senai", "Atletico Mineiro", "Samsung"};  // Lista de palavras para o jogo
string palavraSorteada;  // Palavra a ser sorteada
string palavraEscondida;  // Palavra com as letras escondidas
int tentativasMaximas = 6;  // Número máximo de tentativas
int tentativas = 0;  // Número atual de tentativas

// Função para sortear uma palavra aleatória da lista
void sortearPalavra() {
    srand(time(0));  // Semente para gerar números aleatórios
    int indice = rand() % palavras.size();  // Índice aleatório baseado no tamanho da lista de palavras
    palavraSorteada = palavras[indice];  // Define a palavra sorteada
}

// Função para esconder as letras da palavra sorteada
void esconderPalavra() {
    palavraEscondida = palavraSorteada;  // Inicializa a palavra escondida com a palavra sorteada
    for (int i = 0; i < palavraEscondida.size(); i++) {
        palavraEscondida[i] = '_';  // Substitui todas as letras por '_'
    }
}

// Função para exibir a palavra escondida com as letras descobertas
void exibirPalavra() {
    for (int i = 0; i < palavraEscondida.size(); i++) {
        cout << palavraEscondida[i] << " ";  // Exibe a palavra escondida com espaços entre as letras
    }
    cout << endl;
}

// Função para verificar se a palavra foi completamente descoberta
bool palavraDescoberta() {
    for (int i = 0; i < palavraEscondida.size(); i++) {
        if (palavraEscondida[i] == '_') {
            return false;  // Se ainda houver letras escondidas, retorna falso
        }
    }
    return true;  // Todas as letras foram descobertas
}

// Função para verificar se a letra está presente na palavra sorteada
bool letraPresente(char letra) {
    for (int i = 0; i < palavraSorteada.size(); i++) {
        if (palavraSorteada[i] == letra) {
            return true;  // Se a letra for encontrada na palavra sorteada, retorna verdadeiro
        }
    }
    return false;  // A letra não foi encontrada na palavra sorteada
}

// Função para atualizar a palavra escondida com a letra descoberta
void atualizarPalavra(char letra) {
    for (int i = 0; i < palavraSorteada.size(); i++) {
        if (palavraSorteada[i] == letra) {
            palavraEscondida[i] = letra;  // Substitui a letra escondida pela letra descoberta
        }
    }
}

// Função para exibir as tentativas restantes
void exibirTentativasRestantes() {
    cout << "Tentativas restantes: " << tentativasMaximas - tentativas << endl;
}

// Função para exibir as letras já tentadas
void exibirLetrasTentadas(vector<char> letrasTentadas) {
    cout << "Letras já tentadas: ";
    for (int i = 0; i < letrasTentadas.size(); i++) {
        cout << letrasTentadas[i] << " ";  // Exibe as letras já tentadas separadas por espaço
    }
    cout << endl;
}

int main() {
    sortearPalavra();  // Sorteia uma palavra aleatória
    esconderPalavra();  // Esconde as letras da palavra sorteada
    vector<char> letrasTentadas;  // Lista de letras já tentadas
    cout << "Bem-vindo ao jogo Super Forca!" << endl;
    while (tentativas < tentativasMaximas) {  // Loop para as tentativas do jogador
        cout << endl;
        exibirPalavra();  // Exibe a palavra com as letras escondidas
        exibirTentativasRestantes();  // Exibe o número de tentativas restantes
        exibirLetrasTentadas(letrasTentadas);  // Exibe as letras já tentadas
        char letra;
        cout << "Digite uma letra: ";
        cin >> letra;  // Lê a letra digitada pelo jogador
        if (letraPresente(letra)) {  // Verifica se a letra está presente na palavra sorteada
            atualizarPalavra(letra);  // Atualiza a palavra escondida com a letra descoberta
            if (palavraDescoberta()) {  // Verifica se todas as letras foram descobertas
                cout << endl << "Parabéns! Você descobriu a palavra: " << palavraSorteada << endl;
                break;  // Encerra o jogo se a palavra for descoberta
            }
        } else {
            letrasTentadas.push_back(letra);  // Adiciona a letra à lista de letras tentadas
            tentativas++;  // Incrementa o número de tentativas
            if (tentativas == tentativasMaximas) {
                cout << endl << "Você perdeu! A palavra era: " << palavraSorteada << endl;
            }
        }
    }
    return 0;  // Encerra o programa
}