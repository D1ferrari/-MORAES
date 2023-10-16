import java.util.Scanner;

public class exercicio11 {
      public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite o comprimento da aresta: ");
        double aresta = scanner.nextDouble();

        double volume = Math.pow(aresta, 3);

        System.out.println("O volume do cubo é: "+ volume + "cm2");

        scanner.close();

    }
}    