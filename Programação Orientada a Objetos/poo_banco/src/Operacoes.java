public class Operacoes {
    public double deposito(double saldo, double deposito){
        return saldo + deposito;
    }
    public double saque(double saldo, double saque){
        if (saldo == 0) {
            System.out.println("Voce nao tem saldo!");
        }else{
            return saldo - saque;
        }
        return saldo;
    }
}