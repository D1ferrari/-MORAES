import java.util.Scanner;
import java.io.*;

public class Exercicio2 {
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
    
        System.out.print("Digite o valor da area da superficie da esfera: ");
        double area = scanner.nextDouble();
    

        Double raio = Math.sqrt(area / (4 *Math.PI));

        System.out.println("A raio da esfera é: " + raio);

    }
    
}