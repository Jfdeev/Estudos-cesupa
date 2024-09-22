import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        int numero = 0;
        int processo = 0;
        @SuppressWarnings("resource")
        Scanner leitor = new Scanner(System.in);
        System.out.println("Digite um numero inteiro positivo: ");
        numero = leitor.nextInt();

        for(@SuppressWarnings("unused")
        int i = 0;numero > 1;){
            if (numero % 2 == 0) {
                numero = numero/2;
            } else {
                numero = numero*3+1;
            }
            processo++;
        }
        System.out.println("A sequencia se repitiu por: " + processo + " vezes e o resultado foi: " + numero);
    }
}
