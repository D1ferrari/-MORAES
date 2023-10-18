import java.util.Scanner;

public class exercicio5 {

    public static boolean eDivisivelPorQuatro(double numero) {
        return numero % 4 == 0;
    }

    public static boolean eDivisivelPorSete(double numero) {
        return numero % 7 == 0;
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Informe um número: ");
        double numero = scanner.nextInt();

        if (eDivisivelPorQuatro(numero) && eDivisivelPorSete(numero)) {
            System.out.println("O número é dividido por 4 e 7.");
        } else {
            System.out.println("O número não é divisível por 4 e 7.");
        }
}
}