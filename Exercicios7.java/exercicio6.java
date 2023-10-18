import java.util.Scanner;

public class exercicio6 {

    public static long calcularFatorial(int numero) {
        if (numero == 0) {
            return 1;
        } else {
            long fatorial = 1;
            for (int i = 1; i <= numero; i++) {
                fatorial *= i;
            }
            return fatorial;
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Digite um número: ");
        int numero = scanner.nextInt();
        scanner.close();

        if (numero < 0) {
            System.out.println("O fatorial não está definido para números negativos.");
        } else {
            long resultado = calcularFatorial(numero);
            System.out.println("Fatorial de " + numero + ": " + resultado);
        }
    }
}
