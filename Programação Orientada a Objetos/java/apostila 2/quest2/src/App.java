import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        System.out.println("Digite a frase que voce deseja ser lida");

        String frase = sc.nextLine();
        int cont_vogal = 0;
        char[] vogais = new char[]{'A','E','I','O','U'};

        frase = frase.toUpperCase();

        for(int i = 0; i < frase.length(); i++){

            char c = frase.charAt(i);

            for(int j = 0; j < 5; j++){
                if(c == vogais[j]){
                    cont_vogal++;
                }
            }
        }

        System.out.println("Sua frase tem " + cont_vogal + " vogais");

       
    }
}
