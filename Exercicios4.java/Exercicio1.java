import java.util.Scanner;
import java.io.*;

public class Exercicio1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        double PI = 3.14;
        double altura = 13;

        System.out.print("Digite o valor do volume: ");
        double volume = scanner.nextDouble();

        Double raio = Math.sqrt(volume / (Math.PI * altura));

        System.out.println("O raio da base do cilindro é: " + raio + "cm");
        System.out.println("A altura do cilindro é: " + altura + "cm");

    }
}