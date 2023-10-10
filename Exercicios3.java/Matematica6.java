import java.util.Scanner;
import java.io.*;

public class Matematica6 {
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite o valor da base 1: ");
        double base1 = scanner.nextDouble();

        System.out.print("Digite o valor da base 2: ");
        double base2 = scanner.nextDouble();
        
        System.out.print("Digite o valor da altura: ");
        double alturah = scanner.nextDouble();
        
        double calcular = (base1 + base2) * alturah / 2;

        System.out.println("A área do trapézio é: " + calcular);
    }
}
