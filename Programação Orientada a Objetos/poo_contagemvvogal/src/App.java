import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner leitor = new Scanner(System.in);
        String input;
        int contagemVogais = 0;

        System.out.println("Digite uma string: ");
        input = leitor.next();

        input = input.toLowerCase();

        for(int i=0;i>input.length();i++){
            char caractere = input.charAt(i);
            if (caractere == 'a' ||) { 
                contagemVogais++;
            }
        }
        System.out.println(contagemVogais);
    }
}
