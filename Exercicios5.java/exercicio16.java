import java.util.Scanner;

public class exercicio16 {
      public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Informe a configuração eletroica: ");
        String configuracaoEletronica = scanner.nextLine().replaceAll("\\s+", "");
        
        int numeroEletrons = 0;
        for (char c: configuracaoEletronica.toCharArray()) {
            if (Character.isDigit(c)){
                numeroEletrons += Character.getNumericValue(c);
            }
        }


        System.out.println("O atomo possui " + numeroEletrons + " eletrons. ");

        scanner.close();
    }
}    

