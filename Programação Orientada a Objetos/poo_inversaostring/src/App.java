import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        int i;
        String palavra;
        @SuppressWarnings("resource")
        Scanner leitor = new Scanner(System.in);
        System.out.println("Digite uma string: ");
        palavra = leitor.nextLine();
        
        for(i=palavra.length() - 1;i>=0;i--){
            System.out.print(palavra.charAt(i));
        }

    }
}
