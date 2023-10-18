import java.util.Scanner;

public class exercicio2 {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Informe a primeira matriz: ");
        double a = scanner.nextInt();
        
        System.out.print("Informe a segunda matriz: ");
        double b = scanner.nextInt();

        
        System.out.print("Informe a terceira matriz: ");
        double c = scanner.nextInt();
        
        System.out.print("Informe a quarta matriz: ");
        double d = scanner.nextInt();
      

        double calculo = (a * d - b * c);

        System.out.println("O Determinante é: " + calculo);

    }
 }