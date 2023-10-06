public class Atividade19 {
    public static void main(String[] args) {

        int numero = 4;

        for(int i = 2; i <= numero/2; i++){

            if (numero % i == 0){

            System.out.println("O numero não é primo");
            return;

            }
        }
        if (numero > 1){
            System.out.println("O numero é primo");
        }else{
            System.out.println("O numero não é primo");
        }
    }

}
