import java.util.Scanner;

public class bancoApp {
    public static void main(String[] args) throws Exception {
        double saldo = 0;
        double saldo2 = 0;
        double deposito;
        double saque;
        double transferencia;
        int opcao_conta;
        int opcao_usuario;
        Scanner leitor = new Scanner(System.in);
        while (true) {
            opcao_usuario = 0;
            System.out.println("Olá, seja bem vindo ao banco Jf. Digite 1 para ver seu saldo, 2 para realizar um saque, 3 para realizar um deposito e 5 para sair do sistema.");
            opcao_usuario = leitor.nextInt();
            if (opcao_usuario == 1) {
                System.out.println("Qual a conta que deseja 1 ou 2: ");
                opcao_conta = leitor.nextInt();
                if (opcao_conta == 1) {
                    System.out.println(saldo);
                }
                if (opcao_conta == 2) {
                    System.out.println(saldo2);
                }
            }
            if (opcao_usuario == 2) {
                    System.out.println("Qual conta deseja 1 ou 2: ");
                    opcao_conta = leitor.nextInt();
                    if (opcao_conta == 1) {
                        System.out.println("Digite o valor do saque: ");
                        saque = leitor.nextDouble();
                        System.out.println("O seu saldo agora é: ");
                        Operacoes op = new Operacoes();
                        saldo = op.saque(saldo, saque);
                        System.out.println(saldo);
                    }
                    if (opcao_conta == 2) {
                        System.out.println("Digite o valor do saque: ");
                        saque = leitor.nextDouble();
                        System.out.println("O seu saldo agora é: ");
                        Operacoes op = new Operacoes();
                        saldo2 = op.saque(saldo2, saque);
                        System.out.println(saldo2);
                    }
            }
            if(opcao_usuario == 3){
                System.out.println("Qual conta deseja 1 ou 2: ");
                opcao_conta = leitor.nextInt();
                if (opcao_conta == 1) {
                    System.out.println("Digite o valor do deposito: ");
                    deposito = leitor.nextDouble();
                    System.out.println("O valor do seu saldo agora é: ");
                    Operacoes op = new Operacoes();
                    saldo = op.deposito(saldo, deposito);
                    System.out.println(saldo);
                }
                if (opcao_conta == 2) {
                    System.out.println("Digite o valor do deposito: ");
                    deposito = leitor.nextDouble();
                    System.out.println("O valor do seu saldo agora é: ");
                    Operacoes op = new Operacoes();
                    saldo2 = op.deposito(saldo2, deposito);
                    System.out.println(saldo2);
                }
            }
            if(opcao_usuario == 4){
                System.out.println("Qual a conta que irá realizar a transferencia 1 ou 2");
                opcao_conta = leitor.nextInt();
                System.out.println("Digite o valor da transferência: ");
                transferencia = leitor.nextDouble();

                if (opcao_conta == 1) {
                    if (saldo >= transferencia) {
                        Operacoes op = new Operacoes();
                        saldo = op.saque(saldo, transferencia);
                        saldo2 = op.deposito(saldo2, transferencia);
                        System.out.println("Transferência realizada com sucesso!");
                    } else {
                        System.out.println("Saldo insuficiente para a transferência.");
                    }
                }
                if (opcao_conta == 2) {
                    if (saldo2 >= transferencia) {
                        Operacoes op = new Operacoes();
                        saldo2 = op.saque(saldo2, transferencia);
                        saldo = op.deposito(saldo, transferencia);
                        System.out.println("Transferência realizada com sucesso!");
                    } else {
                        System.out.println("Saldo insuficiente para a transferência.");
                    }
                }
            }
            if (opcao_usuario == 5) {
                break;
            }

        }
        
    }
}
