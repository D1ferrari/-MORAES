import java.util.Scanner;

public class exercicio8 {
      public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Informe a tensão: ");
        double tensão = scanner.nextDouble();

        System.out.print("Informe a resistencia: ");
        double resistencia  = scanner.nextDouble();

        double potencia = (Math.pow(tensão, 2) / resistencia);

        System.out.println("A potencia dissipada é " + potencia + " W.");


    }
}    
