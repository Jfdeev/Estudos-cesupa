import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        String frase = "";
        String frase_invertida = "";

        System.out.println("Digite a frase a ser invertida: ");
        frase = sc.nextLine();

        for(int i = frase.length() - 1; i >= 0; i--){
            frase_invertida += frase.charAt(i);
        }

        System.out.println("O texto invertido é: " + frase_invertida);
    }
}
