import java.util.Scanner;

public class cauculadoraApp {
    public static void main(String[] args) throws Exception {
        //variaveis
        double x;
        double y;
        int op;
        while (true) {
        op = 0;
        //armazenador
        Scanner leitor = new Scanner(System.in);
        System.out.println("Digite 1 para soma, 2 para subtracao, 3 para multiplacaco, 4 para divisao e 5 para sair");
        op = leitor.nextInt();
        //if da soma
            if(op == 1){
                System.out.println("Digite um numero");
                //armazenando o valor de x
                x = leitor.nextInt();
                System.out.println("Digite outro numero");
                //armazenando o valor de x
                y = leitor.nextInt();
                //somar e mostrar o resultado
                Cauculadora calc = new Cauculadora();
                double res = calc.soma(x, y);
                System.out.println(res);
            }
            if(op == 2){
                System.out.println("Digite um numero");
                //armazenando o valor de x
                x = leitor.nextInt();
                System.out.println("Digite outro numero");
                //armazenando o valor de x
                y = leitor.nextInt();
                //somar e mostrar o resultado
                Cauculadora calc = new Cauculadora();
                double res = calc.sub(x, y);
                System.out.println(res);
            }
            if(op == 3){
                System.out.println("Digite um numero");
                //armazenando o valor de x
                x = leitor.nextInt();
                System.out.println("Digite outro numero");
                //armazenando o valor de x
                y = leitor.nextInt();
                //somar e mostrar o resultado
                Cauculadora calc = new Cauculadora();
                double res = calc.mult(x, y);
                System.out.println(res); 
            }
            if(op == 4){
                System.out.println("Digite um numero");
                //armazenando o valor de x
                x = leitor.nextInt();
                System.out.println("Digite outro numero");
                //armazenando o valor de x
                y = leitor.nextInt();
                //somar e mostrar o resultado
                Cauculadora calc = new Cauculadora();
                double res = calc.div(x, y);
                System.out.println(res);
            }
            if (op == 5) {
                System.out.println("Saindo da Cauculadora!");
                break;
            }
            else{
                System.out.println("Opção invalida");
            }
        }
    }
}