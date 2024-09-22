import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int i;
        int total = 0;
        int par = 2;

        System.out.println("Quantas vezes você deseja que a primeira soma seja realizada?");
        i = sc.nextInt();

        for(int j = 0; j < i; j++){
           // total += par;
            par += 2;
        }

        System.out.println("A soma total dos números é: " + par);

    }
}
