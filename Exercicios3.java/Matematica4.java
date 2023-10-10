  import java.util.Scanner;
  import static java.lang.Math.sqrt;
  
public class Matematica4 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite o valor do cateto oposto: ");
        double cateto1 = scanner.nextDouble();

        System.out.print("Digite o valor do cateto adjacente: ");
        double cateto2 = scanner.nextDouble();
        
        double c = Math.sqrt(Math.pow(cateto1, 2) + Math.pow(cateto2, 2));

        System.out.println("O comprimento da hipotenusa é: " +
        c);

    }
}
