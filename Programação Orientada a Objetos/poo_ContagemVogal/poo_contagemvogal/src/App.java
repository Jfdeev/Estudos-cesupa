import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        int n;
        int i;
        int resul = 0;
        int numeroPar = 2;
        
        @SuppressWarnings("resource")
        Scanner leitor = new Scanner(System.in);
        System.out.println("Digite o valor de n: ");
        n = leitor.nextInt();

        for(i=0;i<n;i++){
            resul += numeroPar;
            numeroPar += 2;
        }
        System.out.println("A soma dos primeieros" + n + "numeros pares é igual a: " + resul);
    }
}
