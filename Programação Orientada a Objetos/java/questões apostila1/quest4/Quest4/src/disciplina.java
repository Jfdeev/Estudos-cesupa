import java.util.Scanner;

public class disciplina {
    String nome;
    String horario;
    int sala;
    aluno[] alunos = new aluno[6];

    professor prof = new professor();

    public disciplina(String nome){
        this.nome = nome;
    }

    public void vincularProfessor(){
        System.out.println(prof.nome);
    }

    public void darNotas(){
        Scanner sc = new Scanner(System.in);

        for(int i = 0; i < 6; i++){
            System.out.println("Insira as notas do aluno: " + this.alunos[i].nome);
            System.out.println("Digite a primeira nota: ");
            this.alunos[i].nota1 = sc.nextDouble();
            System.out.println("Digite a segunda nota: ");
            this.alunos[i].nota2 = sc.nextDouble();
            System.out.println("Digite a terceira nota: ");
            this.alunos[i].nota3 = sc.nextDouble();
            System.out.println("Digite a quarta nota: ");
            this.alunos[i].nota4 = sc.nextDouble();

        }
    }

    public void imprimir(){
        for(int i = 0; i < 6; i++){
            System.out.println("Nome: " + this.alunos[i].nome + "\nPrimeira nota: " + this.alunos[i].nota1 + "\nSegunda nota: " + this.alunos[i].nota2 + "\nTerceira nota: " + this.alunos[i].nota3 + "\nQuarta nota: " + this.alunos[i].nota4 + "\nMédia: " + this.alunos[i].getMedia() + "\nAprovado ?" + this.alunos[i].aprovado() + "\n\n");
        }

    }

}
