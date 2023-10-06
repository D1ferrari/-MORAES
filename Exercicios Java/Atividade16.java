public class Atividade16 {
    public static void main(String[] args) {

        int num1 = 12; // declara numero
        int menorDivisor = 1; // declara menor divisor

        for ( int i = 2; i > num1; i--){ // loop for 
            if (num1 % i == 0) { // comando if
                menorDivisor = i ;
            }
        }
        System.out.println("O menor divisor é: " + menorDivisor);
    }
}
