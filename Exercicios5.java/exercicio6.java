import java.util.Scanner;

public class exercicio6 {
      public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Informe a distacia percorrida(em metros): ");
        double distancia = scanner.nextDouble();

        System.out.print("Informe o tempo gasto (em segundos): ");
        double tempo =  scanner.nextDouble();

        double calculo = distancia / tempo;

        System.out.println("A velocidade media é " + calculo + " m/s.");

        scanner.close();

    } 
} 