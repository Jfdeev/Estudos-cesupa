import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        String frase;
        int cont = 1;

        System.out.println("Digite uma frase para que eu conte as palavras");
        frase = sc.nextLine();

        for(int i = 0; i <= frase.length()-1; i++){
            if (frase.charAt(i) == ' ' && frase.charAt(i+1) == ' ') {
                
            }else if(frase.charAt(i) == ' '){
                cont++;
            }else{

            }
        }

        System.out.println("Sua frase tem " + cont + " palavras");

    }
}
