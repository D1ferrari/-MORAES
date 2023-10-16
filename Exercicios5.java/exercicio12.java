import java.util.Scanner;

public class exercicio12 {
      public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Informe o raio da esfera : ");
        double raio = scanner.nextDouble();

        double area = 4 * Math.PI * Math.pow(raio, 2);
        
        System.out.println("A area da superficie da esfera é aproximadamente: "+ area + " cm2");

        scanner.close();
    }
}    
