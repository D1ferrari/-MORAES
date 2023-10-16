import java.util.Scanner;


public class exercicio1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Digite a massa: ");
        double massa = scanner.nextDouble();

        System.out.println("Digite a massa molar: ");
        double massaMolar = scanner.nextDouble();

        double resultado = massa / massaMolar;

        System.out.println("A quantidade de mols é de: " +resultado);

        scanner.close();

    }
}