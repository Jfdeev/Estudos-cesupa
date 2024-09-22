import java.util.ArrayList;

public class Clinica {
    private ArrayList<Clientes> filaDeEspera;
    
    public Clinica() {
        this.filaDeEspera = new ArrayList<>();
    }

    private boolean isPrimo(int num) {
        if (num <= 1) return false;
        if (num == 2) return true;
        if (num % 2 == 0) return false;
        for (int i = 3; i <= Math.sqrt(num); i += 2) {
            if (num % i == 0) return false;
        }
        return true;
    }


    public void adicionarCliente(Clientes cliente) {
        int idade = cliente.getIdade();
        boolean inserido = false;
        
        for (int i = 0; i < filaDeEspera.size(); i++) {
            Clientes outroCliente = filaDeEspera.get(i);
            int outraIdade = outroCliente.getIdade();

            
            if ((isPrimo(idade) && !isPrimo(outraIdade)) ||  // Cliente com idade primo tem prioridade
                (!isPrimo(idade) && idade % 2 != 0 && outraIdade % 2 == 0)) {  // Idade ímpar antes de idade par
                filaDeEspera.add(i, cliente);
                inserido = true;
                break;
            }
        }
        
        if (!inserido) {
            filaDeEspera.add(cliente);
        }
    }

    public Clientes proximoCliente() {
        if (!filaDeEspera.isEmpty()) {
            return filaDeEspera.remove(0);
        }
        return null;
    }

    public int getTamanhoFila() {
        return filaDeEspera.size();
    }

    public void exibirFila() {
        for (Clientes cliente : filaDeEspera) {
            System.out.println(cliente);
        }
    }
}