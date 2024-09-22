import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        int n;
        int soma = 0;
        int i;
        @SuppressWarnings("resource")
        Scanner leitor = new Scanner(System.in);
        System.out.println("Digite um numero: ");
        n = leitor.nextInt();

        for(i=0;i<=n;i++){
            soma += i;
        }

        double media = soma/n;

        System.out.println("a media dos primeiros " + n + " é: " + media);

    }
}
