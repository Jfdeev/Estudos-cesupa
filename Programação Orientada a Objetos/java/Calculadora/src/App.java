import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {

        int account[];
        account = new int[2];
        account[1] = 1000;
        account[2] = 1000;
        int conta = 0;
        boolean flag = false;

        Scanner sc = new Scanner(System.in);

        do {
            System.out.println("==== Banco do milhão ====");
            System.out.println("1 - Consultar conta");
            System.out.println("2 - Sacar da conta");
            System.out.println("3 - Depositar na conta");
            System.out.println("4 - Transferir");
            System.out.println("5 - Sair");
            System.out.println("===========================");

            int choose = sc.nextInt();
            conta = sc.nextInt();

            switch (choose) {
                case 1:
                    System.out.println("Qual conta deseja verificar?");
                    conta = sc.nextInt();

                    if(conta == 1){
                        System.out.println("Valor disponivel: " + account[1]);
                    }else if(conta == 2){
                        System.out.println("Valor disponivel: " + account[2]);
                    }else{
                        System.out.println("insira um número válido de conta");
                    }
                    break;

                case 2:
                    System.out.println("Qual conta deseja verificar?");

                    if(conta == 1){
                        System.out.println("Quanto deseja depositar?");
                    }else if(conta == 2){
                       System.out.println("Valor disponivel: " + account[2]);
                    }else{
                        System.out.println("insira um número válido de conta");
                    }
                    break;

                case 3:
                    
                    break;

                case 4:
                    
                    break;

                case 5:
                    flag = true;
                    break;
            }

            
        } while (flag != true);
        
    }
}
