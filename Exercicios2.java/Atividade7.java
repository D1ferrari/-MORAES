import java.util.Scanner;

public class Atividade7 {
    public static void main(String[] args) {

    Scanner entrada = new Scanner(System.in);

    System.out.print("Digite o primeiro numero: ");
    int num1 = Integer.parseInt(entrada.nextLine());
    System.out.print("Digite o segundo numero: ");
    int num2 = Integer.parseInt(entrada.nextLine());

    int resultado = somar(num1, num2);
    
    System.out.println("A soma dos numeros é: " + resultado);
    
    }
    public static int somar(int a, int b){
        int soma = a + b;
        return soma;
    }
}
