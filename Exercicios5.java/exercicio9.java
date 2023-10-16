import java.util.Scanner;

public class exercicio9 {
      public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Informe a massa: ");
        double massa = scanner.nextDouble();

        System.out.print("Informe a aceleração: ");
        double aceleracao  = scanner.nextDouble();

        double forca = massa * aceleracao;

        System.out.println("A força necessária é de " + forca + " N.");


    }
}    
