import java.time.LocalDate;
import java.util.List;

public class ContaCorrente {
    int numero;
        int agencia;
        String nomeCliente;
        LocalDate dataNascimento;
        private double saldo;
        boolean ativo = true;

        Double consutarSaldo(){
            return saldo;
        }
        
        List consultarExtarato(LocalDate datainicial, LocalDate dataFinal){
            return ;
        }
        
        void cancelar(String justificativa){

        }
        
        
        void tranferir(ContaCorrente contaDestino, Double valorSolicitado){

        }
        
        
        void sacar(Double valorSolicitado){

        }
}
