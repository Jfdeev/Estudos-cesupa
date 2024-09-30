public class Carga {
    private int peso;
    private String nome;
    private String conteudo;

    Cliente[] clientes = new Cliente[1];
    
    public Carga(int peso, String nome, String conteudo) {
        this.peso = peso;
        this.nome = nome;
        this.conteudo = conteudo;
    }

    public int getPeso() {
        return peso;
    }

    public String getNome() {
        return nome;
    }

    public String getConteudo() {
        return conteudo;
    }

    public void imprimirDadosCargas(){
        for(int i = 0; i > 2; i++){
            System.out.println("Numero Carga: " + getNome());
            System.out.println("Conteudo: " + getConteudo());
            System.out.println("Vinculado a: " + clientes[i].getNome());
            System.out.println("CPF: " + clientes[i].getCpf());
        }
    }
    
}
