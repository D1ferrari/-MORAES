import java.util.Scanner;

public class exercicio7 {
      public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Informe a tensão: ");
        double tensao = scanner.nextDouble();

        System.out.print("Informe a corrente: ");
        double corrente =  scanner.nextDouble();

        double calculo = tensao / corrente;

        System.out.println("A resistência é " + calculo + " ohms");

        scanner.close();

    } 
} 