import java.util.Scanner;
import java.io.*;

public class Matematica9 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite o valor do lado da base: ");
        double lado = scanner.nextDouble();

        System.out.print("Digite o valor da altura: ");
        double altura = scanner.nextDouble();

        double calcular = altura * Math.pow(lado, 2) / 3;

        System.out.println("O Volume da Pirâmide é: " + calcular);
    }
}
