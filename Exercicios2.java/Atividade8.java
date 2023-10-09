import java.util.Scanner;

public class Atividade8 {
    public static void main(String[] args) {

        Scanner entrada = new Scanner(System.in);
    
        System.out.print("Digite a base do retângulo: ");
        int num1 = Integer.parseInt(entrada.nextLine());
        System.out.print("Digite a altura do retângulo: ");
        int num2 = Integer.parseInt(entrada.nextLine());
    
        int resultado = mult(num1, num2);
        
        System.out.println("A área do retângulo é de: " + resultado);
        
        }
        public static int mult(int a, int b){
            int soma = a * b;
            return soma;
        }
}
