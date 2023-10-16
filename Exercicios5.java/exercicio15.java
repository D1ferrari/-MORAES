import java.util.Scanner;

public class exercicio15 {
      public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite a configuração eletrônica: ");
        String configuracaoEletronica = scanner.nextLine();

        int ultimoSubnivel = Character.getNumericValue (configuracaoEletronica.charAt(configuracaoEletronica.length() - 2));
        System.out.println("O último subnível preenchido é " + ultimoSubnivel + "s ");
    }
}    

