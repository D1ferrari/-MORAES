import java.util.Scanner;

public class exercicio4 {
      public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite o número de camadas eletronicas: ");
        int numeroCamadas = scanner.nextInt();
        int quantidadeEletronsTerceiraCamada = 0;

        if (numeroCamadas >= 3){
            quantidadeEletronsTerceiraCamada = 2 * (numeroCamadas - 2) * (numeroCamadas - 2);
        }

        System.out.println("A terceira camada pode acomodar até: " + quantidadeEletronsTerceiraCamada + " eletrons." );

        scanner.close();

}
    
}
