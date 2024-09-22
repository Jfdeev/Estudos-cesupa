public class Clientes {
    private String nome;
    private double cpf;
    private int idade;
    
    public Clientes(String nome, double cpf, int idade) {
        this.nome = nome;
        this.cpf = cpf;
        this.idade = idade;
    }

    public String getNome() {
        return nome;
    }

    public double getCpf() {
        return cpf;
    }

    public int getIdade() {
        return idade;
    }

    
}
