public class Empresas {
    private String nome;
    Clientes[] clientes = new Clientes[3];
    Moveis[] moveis = new Moveis[3];

    public String getNome() {
        return nome;
    }
    public void setNome(String nome) {
        this.nome = nome;
    }

    public void imprimirClientes(){
        for(int i = 0; i < 3; i++){
            System.out.println("-------------------------------------------------");
            System.out.println("Nome: " + clientes[i].getNome());
            System.out.println("Cpf: " + clientes[i].getCpf());
            System.out.println("Idade: " + clientes[i].getIdade());
        }
    }

    public void imprimirMoveis(){
        for(int i=0; i < 3; i++){
            System.out.println("---------------------------------------------------");
            System.out.println("Moveis da empresa: " + getNome());
            System.out.println("Cep: " + moveis[i].getCep());
            System.out.println("Area: " + moveis[i].getArea());
            System.out.println("Vendido: " + moveis[i].isValidacao());
        }
    }
    
}
