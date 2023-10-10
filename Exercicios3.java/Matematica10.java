import java.util.Scanner;
import java.io.*;

public class Matematica10 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
    
        System.out.print("Digite o valor do raio da base: ");
        double raio = scanner.nextDouble();
    
        System.out.print("Digite o valor da altura: ");
        double altura = scanner.nextDouble();

        double calcular = 3.14 * Math.pow(raio, 2) * altura; 

        System.out.println("O volume da pirâmide é: " + calcular);

    }
    
}
