import java.util.Scanner;

public class exercicio8 {

    public static boolean ehNumeroPerfeito(int numero) {
        int somaDivisores = 0;

        for (int i = 1; i < numero; i++) {
            if (numero % i == 0) {
                somaDivisores += i;
            }
        }
        return somaDivisores == numero;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Digite um número: ");
        int numero = scanner.nextInt();
        scanner.close();

        if (numero <= 0) {
            System.out.println("O número não é perfeito.");
        } else if (ehNumeroPerfeito(numero)) {
            System.out.println("O número é perfeito.");
        } else {
            System.out.println("O número não é perfeito.");
        }
    }
}
