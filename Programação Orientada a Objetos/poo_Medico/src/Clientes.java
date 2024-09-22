public class Clientes {
    private String nome;
    private int idade;

    
    public Clientes(String nome, int idade) {
        this.nome = nome;
        this.idade = idade;
    }


    public String getNome() {
        return nome;
    }


    public int getIdade() {
        return idade;
    }

    @Override
    public String toString() {
        return "Cliente: " + nome + ", Idade: " + idade;
    }
}

