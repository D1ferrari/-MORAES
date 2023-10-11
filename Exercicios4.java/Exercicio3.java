import java.util.Scanner;
import java.io.*;

public class Exercicio3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        double PI = 3.14;
        double altura = 9;

        System.out.print("Digite o valor do cone: ");
        double volume = scanner.nextDouble();
    
        Double raio = Math.sqrt((3 + volume) / (Math.PI * altura));

        System.out.println("O raio da base do cone é: " + raio + "cm");
     

    }
}
