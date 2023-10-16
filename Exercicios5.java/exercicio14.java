import java.util.Scanner;

public class exercicio14 {
      public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Informe um numero real: ");
        double numero = scanner.nextDouble();

        double calculo = Math.abs(numero);

        System.out.println("O valor absoluto de " + numero + " é " + calculo + "." );

        scanner.close();
    }
}    

