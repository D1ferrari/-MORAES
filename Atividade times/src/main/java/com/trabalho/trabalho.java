package com.trabalho; 
import java.util.Scanner; 

public class trabalho { 

public static void main(String[] args) {

    String[] times = {
            "Chapecoense", "Fortaleza", "Atlético Mineiro", "Bahia", "Fabricio",
            "Uberaba Sport Club", "Aymorés", "Vila Nova", "Tombense", "Democrata",
            "Nacional Futebol Clube", "Amazonas", "Ferroviaria", "Athletic Club",
            "Caxias do Sul", "Portuguesa", "Boa Esporte", "Betim", "URT", "Itabirito",
            "Paracatu", "Contagem", "Mamoré", "Guarani", "Brusque", "Operário" 
}; 
    int[] pontuacoes = new int[times.length]; 

    int[] cartoesAmarelos = new int[times.length];

    Scanner scanner = new Scanner(System.in); 

    while (true) { 

        System.out.println("\nEscolha uma opção:"); 
        System.out.println("1 - Visualizar Tabela"); 
        System.out.println("2 - Editar Pontuação");
        System.out.println("3 - Editar Cartões Amarelos:"); 
        System.out.println("0 - Sair"); 

    int opcao = scanner.nextInt();

    switch (opcao) { 
    case 0: 
        scanner.close(); 
        return; 
    case 1:
        exibirTabela(times,cartoesAmarelos, pontuacoes); 
        break; 
    case 2: 
        editarPontuacao(times, pontuacoes,cartoesAmarelos, scanner); 
        break; 
    case 3:
        editarCartoesAmarelos(times, pontuacoes, cartoesAmarelos, scanner);
        break;
    default:

        System.out.println("Opção inválida. Tente novamente."); 
        break; 
        } 
    } 
}
    public static void exibirTabela(String[] times, int[] pontuacoes, int[] cartoesAmarelos) {
        System.out.println("\nPosição | Time | Pontuação | Cartões Amarelos");
        for (int i = 0; i < times.length; i++) {
        System.out.println((i + 1) + " | " + times[i] + " | " + pontuacoes[i] + "|" + cartoesAmarelos[i]);
    } 
} 

    public static void exibirTimes(String[] times, int[] pontuacoes, int[] cartoesAmarelos) {
        for (int i = 0; i < times.length; i++) {
        System.out.println((i + 1) + " - " + times[i] + " | Pontuação: " + pontuacoes[i] + "| Cartões Amarelos: " + cartoesAmarelos[i]);
    } 
} 

public static void editarPontuacao(String[] times, int[] pontuacoes, int[] cartoesAmarelos, Scanner scanner) {
    while(true) {
        System.out.println("\nTimes disponíveis para a edição");
        exibirTimes(times, pontuacoes, cartoesAmarelos);
        System.out.println("Escolha o número do time para editar a pontuação (ou 0 para voltar):");

        int posicao = scanner.nextInt();

        if (posicao == 0) {
            break;
        }
        if (posicao >= 1 && posicao <= times.length) {
            System.out.println("Digite a nova pontuação para " + times[posicao - 1]);
            int novosCartoes= scanner.nextInt();
       
        if (novosCartoes >=0){
                    pontuacoes[posicao-1]= novosCartoes;
                }else{
                    System.out.println("A pontuação não pode ser negativa: ");
                    
                }
                
            }else{
                    System.out.println("Posição inválida. Tente novamente");

                }scanner.nextLine();
            
        ordenarPorPontuacaoECartoes(times, pontuacoes, cartoesAmarelos);
    }
}

    public static void editarCartoesAmarelos(String[] times, int[] pontuacoes, int[] cartoesAmarelos, Scanner scanner) {
        while (true) {
            System.out.println("\nTimes disposniveis para edição:");
            exibirTimes(times, pontuacoes, cartoesAmarelos);
            System.out.println("\nEscolha o número do time para editar os cartões amarelos(ou 0 para voltar):");
            
            int posicao = scanner.nextInt();
            if(posicao==0){
                break;
            }
            if (posicao>=1 && posicao <=times.length){
                System.out.println("Digite o novo numero de cartões amarelos do" + times[posicao-1] + ":");
                int novosCartoes = scanner.nextInt();
                if (novosCartoes>=0){
                    cartoesAmarelos[posicao-1] = novosCartoes;
                }else{
                    System.out.println("O numero de cartões amarelos não pode ser negativo.");
                }
            }else{
                System.out.println("Posição inválida, tente novamente.");
            }
        }scanner.nextLine();
    }


    public static void ordenarPorPontuacaoECartoes(String[] times, int[] pontuacoes, int[] cartoesAmarelos) {
        for ( int i = 0; i < pontuacoes.length - 1; i++) {
            for (int j = i + 1; j < pontuacoes.length; j++) {
                if (pontuacoes[i] < pontuacoes[j] || (pontuacoes[i] == pontuacoes[j] && cartoesAmarelos[i] > cartoesAmarelos[j])) {
                    
                    int tempPontuacao = pontuacoes[i];
                    pontuacoes[i] = pontuacoes[j];
                    pontuacoes[j] = tempPontuacao;

                    int tempCartoes = cartoesAmarelos[i];
                    cartoesAmarelos[i] = cartoesAmarelos[j];
                    cartoesAmarelos[j] = tempCartoes;

                    String tempTime = times[i];
                    times[i] = times[j];
                    times[j] = tempTime;
                
            }
        }
    }

}
 }