#include <iostream>
#include <string>
#include <vector>
#include <limits>

using namespace std;

// Representação da pergunta
struct Question {
    string question;
    vector<string> options;
    int correctOption;
};

// Define a equipe
struct Team {
    string name;
    int score;

    Team(const string& _name) : name(_name), score(0) {}
};

// Exibir uma pergunta na saída padrão
void displayQuestion(const Question& q) {
    cout << q.question << endl;
    for (size_t i = 0; i < q.options.size(); i++) {
        cout << char('a' + i) << ") " << q.options[i] << endl;
    }
}

// Verifica se a resposta do jogador está correta
bool checkAnswer(int playerAnswer, const Question& q) {
    return playerAnswer == q.correctOption;
}

int main() {
    // Criando as equipes
    vector<Team> teams;
    teams.emplace_back("Grupo 1");
    teams.emplace_back("Grupo 2");
    teams.emplace_back("Grupo 4");

    // Criação das perguntas
    vector<vector<Question>> groupQuestions = {
        // Grupo 1
        {
            {"Qual é o símbolo usado para iniciar um comentário de uma linha em C++?",
             {"//", "/*", "<!--", "--"},
             0},
            {"Qual é a saída padrão em C++?",
             {"input()", "console.log()", "cout", "print()"},
             2},
            {"Qual é a finalidade de usar a palavra-chave `cin` em C++?",
             {"Imprimir mensagens na tela", "Ler entradas do usuário a partir do teclado", "Realizar cálculos complexos", "Definir uma função"},
             0},
            {"Qual operador é usado para realizar uma comparação de desigualdade?",
             {"!=", "==", "<=", ">="},
             0},
        },
        // Grupo 2
        {
            {"O que é um loop em C++ e qual é a sua finalidade?",
             {"Um tipo de dado para armazenar múltiplos valores", "Uma declaração que define uma classe", "Uma estrutura que permite a execução repetida de um bloco de código", "Uma função para imprimir valores na tela"},
             2},
            {"Qual operador é usado para realizar uma comparação?",
             {"=", "+", "==", "*"},
             2},
            {"Explique a diferença entre um array e um vetor em C++",
             {"Não há diferença; são termos intercambiáveis", "Arrays são usados para armazenar valores do mesmo tipo, enquanto vetores armazenam tipos diferentes", "Vetores são usados para armazenar valores do mesmo tipo, enquanto arrays podem armazenar tipos diferentes", "Arrays são mais eficientes que vetores na alocação de memória"},
             0},
            {"O que é uma função em C++ e por que ela é útil?",
             {"Uma variável global que pode ser acessada de qualquer lugar", "Um trecho de código que não pode ser reutilizado", "Uma instrução que define um loop", "Um bloco de código que realiza uma tarefa específica e pode ser reutilizado"},
             3},
        },
        // Grupo 4
        {
            {"Qual é a principal vantagem de utilizar vetores na programação?",
             {"Armazenamento de Dados", "Manipulação de Dados", "Flexibilidade", "Controle de Fluxo"},
             0},
            {"O que um bloco de código delimitado por chaves ({}) em C++ representa?",
             {"Uma declaração de variável", "Um comentário", "Um loop infinito", "Um escopo de código"},
             3},
            {"Qual é a função da biblioteca <cstdlib> em C++?",
             {"Manipular strings", "Controlar estruturas de repetição", "Realizar operações matemáticas", "Fornecer funções para gerar números aleatórios"},
             3},
            {"Qual é o operador usado para acessar o valor armazenado em um vetor em C++?",
             {":", "*", "->", "[]"},
             3},
        }
    };

    int choice = 0;
    while (true) {
        cout << "========================================" << endl;
        cout << "1. Grupo 1" << endl;
        cout << "2. Grupo 2" << endl;
        cout << "3. Grupo 4" << endl;
        cout << "4. Ver Pontuação" << endl;
        cout << "5. Sair" << endl;
        cout << "Escolha uma opção: ";

        while (!(cin >> choice)) {
            cout << "Digite um número válido: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cout << "========================================" << endl;

        if (choice >= 1 && choice <= 3) {
            int groupChoice = choice - 1;
            const vector<Question>& groupQuestionsList = groupQuestions[groupChoice];

            cout << "----------------------------------------" << endl;
            cout << "Rodada - " << teams[groupChoice].name << endl;

            for (int questionIndex = 0; questionIndex < groupQuestionsList.size(); ++questionIndex) {
                const Question& currentQuestion = groupQuestionsList[questionIndex];

                cout << "Pergunta " << questionIndex + 1 << ":" << endl;
                displayQuestion(currentQuestion);

                int playerAnswer;
                string userResponse;

                while (true) {
                    cout << "Digite a opção correta: ";
                    cin >> userResponse;

                    char responseChar = tolower(userResponse[0]);

                    if (responseChar >= 'a' && responseChar <= 'd') {
                        playerAnswer = responseChar - 'a';
                        break;
                    } else {
                        cout << "Digite uma opção válida." << endl;
                    }
                }

                if (checkAnswer(playerAnswer, currentQuestion)) {
                    teams[groupChoice].score++;
                    cout << "Resposta correta! Pontuação atual de " << teams[groupChoice].name << ": " << teams[groupChoice].score << endl;
                } else {
                    cout << "Resposta incorreta!" << endl;
                }
            }

            cout << "----------------------------------------" << endl;
        } else if (choice == 4) {
            cout << "Pontuação atual:" << endl;
            for (const Team& team : teams) {
                cout << team.name << ": " << team.score << endl;
            }
        } else if (choice == 5) {
            cout << "Saindo do programa." << endl;
            break;
        } else {
            cout << "Opção inválida. Escolha novamente." << endl;
        }
    }

    cout << "-----------------------------------------" << endl;
    cout << "Pontuação total:" << endl;
    for (const Team& team : teams) {
        cout << team.name << ": " << team.score << endl;
    }

    return 0;
}