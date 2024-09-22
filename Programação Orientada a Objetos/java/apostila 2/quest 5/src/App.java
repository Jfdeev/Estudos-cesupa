import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int res = 0;
        int seq = 0;
        int div;

        System.out.println("Digite o ultimo numero a ser incluso na média: ");
        div = sc.nextInt();

        for(int i = 0; i < div; i++){
            res += seq;
            seq++;
        }

        res = res/div;

        System.out.println("A média foi: "+ res);
    }
}
