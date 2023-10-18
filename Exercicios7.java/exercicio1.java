import java.util.Scanner;

public class exercicio1 {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite a base maior: ");
        double baseMaior = scanner.nextInt();
        System.out.print("Digite a base menor: ");
        double baseMenor = scanner.nextInt();
        System.out.print("Digite a altura: ");
        double altura = scanner.nextInt();

        double calculo = ((baseMaior + baseMenor) * altura) / 2;

        System.out.println("A área do trapézio é: " + calculo);
}
}