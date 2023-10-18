import java.util.Scanner;

public class exercicio4 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner (System.in);

        System.out.println("Digite um número: ");
        int numero = scanner.nextInt();
        
        scanner.close();

        int soma = calcularSomaDigito(numero);

        System.out.println("A soma dos digitos é: " + soma);
    }

    public static int calcularSomaDigito(int numero) {
        int soma = 0;
        while (numero != 0){
            int digito = numero % 10;
            soma += digito;
            numero /= 10;
        }
        return soma;
    }
}
