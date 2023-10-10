import java.util.Scanner;
import java.io.*;

public class Matematica7 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite o valor do raio: ");
        double raio = scanner.nextDouble();

        double calcular = 4 * 3.14 * Math.pow(raio, 3) / 3 ;

        System.out.println("O volume da esfera é de: " + calcular);

    }
}
