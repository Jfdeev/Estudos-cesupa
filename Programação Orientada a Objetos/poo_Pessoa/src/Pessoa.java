public class Pessoa {
    private String nome;
    private String pai;
    private String mae;

    public Pessoa(){
        this.nome = "Sem nome";
        this.pai = "Sem pai";
        this.mae = "Sem mãe";
    }

    public Pessoa(String nome){
        this.nome = nome;
        this.pai = "Sem pai";
        this.mae = "Sem mãe";
    }

    public Pessoa(String nome, String pai){
        this.nome = nome;
        this.pai = pai;
        this.mae = "Sem mãe";
    }

    public Pessoa(String nome, String pai, String mae){
        this.nome = nome;
        this.pai = pai;
        this.mae = mae;
    }

    public String getNome(){
        return this.nome;
    }

    public String getPai(){
        return this.pai;
    }

    public String getMae(){
        return this.mae;
    }

    public void pessoasIguais(Pessoa p){
        if(this.nome.equals(p.getNome()) && this.pai.equals(p.getPai()) && this.mae.equals(p.getMae())){
            System.out.println("As pessoas são iguais");
        } else {
            System.out.println("As pessoas são diferentes");
        }
    }

    public void pessoasIrmaos(Pessoa p){
        if (this.pai.equals(p.getPai()) && this.mae.equals(p.getMae())){
            System.out.println("As pessoas são irmãos");
        } else {
            System.out.println("As pessoas não são irmãos");
            
        }
    }

     
    
}
