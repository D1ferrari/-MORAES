import java.util.Scanner;

public class Matematica2{

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print( "Digite o valor de a: ");
        double a = scanner.nextDouble();

        System.out.print("Digite o valor de b: ");
        double b = scanner.nextDouble();

        System.out.print("Digite o valor de c: ");
        double c = scanner.nextDouble();

        Double bhaskara =  (b * b) + (-4 * (a * c));

        System.out.println("O valor da equação é: " + bhaskara);

    }

}