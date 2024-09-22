public class aluno {
    String nome;
    int matricula;
    double nota1,nota2,nota3,nota4;

    public aluno(String nome, int matricula){
        this.nome = nome;
        this.matricula = matricula;
    }

    public double getMedia(){
        double media = (this.nota1 + this.nota2 + this.nota3 + this.nota4) / 4;
        return media;
    }

    public boolean aprovado(){
        return this.getMedia() >= 7;
    }
}
