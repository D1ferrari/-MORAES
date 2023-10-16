import java.util.Scanner;


public class exercicio2 {
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Informe a quantidade de mols (g/mol): " );

        Double mols = scanner.nextDouble();

        System.out.print("Informe a massa molar: ");
        Double massaMolar = scanner.nextDouble();

        Double massa = mols * massaMolar;

        System.out.println("A massa é: " + massa + "(g)");
}

}
