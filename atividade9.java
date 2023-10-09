import java.util.Scanner;
import java.io.*;

public class atividade9 {
    public static void main(String[] args) {
         Scanner scanner = new Scanner(System.in);

       System.out.println("Digite o raio do circulo ");
       double raio = scanner.nextDouble();

       double area = Math.PI * Math.pow(raio, 2);
       double perimetro = 2 * raio * Math.PI;

       System.out.println("A area do circulo é: " + area);

       System.out.println("Perimetro do circulo é: " + perimetro);
       scanner.close();

    }
    }
     

