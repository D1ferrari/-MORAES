import java.util.Scanner;

public class exercicio5 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Digite a altura: ");
        double altura = scanner.nextDouble();

        System.out.println("Digite a aceleração gravitacional: ");
        double aceleracaoGravitacional = scanner.nextDouble();

        double velocidadeFinal = Math.sqrt(2 *aceleracaoGravitacional + altura);

        System.out.println("A aceleração gravitacional é de: " +velocidadeFinal);

        scanner.close();
}
}
