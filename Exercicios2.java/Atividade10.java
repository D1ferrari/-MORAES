import java.util.Scanner;

    public class Atividade10 {
        public static void main(String[] args) {

            Scanner entrada = new Scanner(System.in);

            System.out.print("Digite o numero: ");
            int num = Integer.parseInt(entrada.nextLine());
    
            if( num % 2 == 0) {
            System.out.println("O numero é par " + num);
            } else {
                System.out.println("O numero é impar " + num);
            } 
    
        }
    }

