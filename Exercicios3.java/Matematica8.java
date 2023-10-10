import java.util.Scanner;
import java.io.*;

public class Matematica8 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite o valor da aresta : ");
        double aresta = scanner.nextDouble();

        double area = 6*(aresta * aresta);
        double volume =  Math.pow(aresta, 3);

        System.out.println("O volume do cubo é de: " +volume + "A area do cubo é: " + area);

    }
    }

