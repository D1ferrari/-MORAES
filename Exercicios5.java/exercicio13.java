import java.util.Scanner;

public class exercicio13 {
      public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite um número real não negativo: ");
        double numero = scanner.nextDouble();

        if (numero >= 0) {
          double raiz = Math.sqrt(numero);
          System.out.println("A raiz quadrade de " + numero + " é " + raiz);
        } else {
          System.out.println("O número digitado é negativo. Por favor, digite um número não negativo.");
        }
        scanner.close();
    }
}    

