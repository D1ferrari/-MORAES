public class Atividade15 {
    public static void main(String[] args) {

        int num1 = 24; // declara numero
        int maiorDivisor = 1; // declara maior divisor

        for ( int i = 2; i<=num1; i++){ // loop for 
            if (num1 % i == 0) { // comando if
                maiorDivisor = i ;
            }
        }
        System.out.println("O maior divisor é: " + maiorDivisor);
    }
}