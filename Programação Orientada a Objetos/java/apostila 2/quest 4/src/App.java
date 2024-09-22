import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        int n;
        int passos = 0;
        Scanner sc = new Scanner(System.in);

        System.err.println("Digite um numero inteiro para ser colocado na sequencia de Collatz: ");
        n = sc.nextInt();

        do {
            if (n == 1) {
                break;
            }else if (n%2 == 0) {
                passos++;
                n = n/2;
            }else if(n%2 != 0){
                passos++;
                n = (n*3)+1;
            }

        } while (n != 1);

        System.out.println("Para n chgar a 1 foram necessários " + passos + " passos");
        
    }
}
