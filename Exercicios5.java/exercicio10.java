import java.util.Scanner;

public class exercicio10 {
      public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Informe a massa do objeto: ");
        double massa = scanner.nextDouble();

        System.out.print("Informe a aceleração gravitacional do planeta : ");
        double aceleracao  = scanner.nextDouble();

        double peso = massa * aceleracao;

        System.out.println("O peso do objeto é  " + peso + " N.");


    }
}    
