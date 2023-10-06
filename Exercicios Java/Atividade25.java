public class Atividade25 {
    
    public static void main(String[] args) {
        
        int numero = 10;
        int primeiro = 0, segundo = 1;
        System.out.println("Sequência de Fibonacci: " + primeiro + ", " + segundo);

        for (int i = 2; i < numero; i++) {
            int proximo = primeiro + segundo;
            System.out.println(", " +proximo);
            primeiro = segundo;
            segundo = proximo;
        }
    }
}
