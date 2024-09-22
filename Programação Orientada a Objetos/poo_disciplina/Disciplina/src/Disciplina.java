import java.util.Scanner;

public class Disciplina {
    String nome;
    String horario;
    int sala;
    Prof prof = new Prof();
    Aluno[] alunos = new Aluno[6];

    public void vincularProfessorDisciplina(){
        System.out.println(prof.nome);
    }

    public void darNotas(){
        @SuppressWarnings({ "resource", "unused" })
        Scanner leitor = new Scanner(System.in);
        int i;


        for(i =0; i<6; i++){
            System.out.println("insira as notas do aluno: "+this.alunos[i].nome);
            System.out.println("Digite a 1 nota: ");
            this.alunos[i].nota1 = leitor.nextDouble();
            System.out.println("Digite a 2 nota: ");
            this.alunos[i].nota2 = leitor.nextDouble();
            System.out.println("Digite a 3 nota: ");
            this.alunos[i].nota3 = leitor.nextDouble();
            System.out.println("Digite a 4 nota: ");
            this.alunos[i].nota4 = leitor.nextDouble();

        }

    
    }
    public void imprimir(){
        int i;
        for(i=0;i<6;i++){
            System.out.println("Nome do aluno é: "+this.alunos[i].nome+"\n 1 nota"+this.alunos[i].nota1+"\n nota 2"+this.alunos[i].nota2+"\n nota 3"+this.alunos[i].nota3+"\n nota 4"+this.alunos[i].nota4+"\nMedia: "+this.alunos[i].getMedia()+"\nAprovado: "+this.alunos[i].aprovado());
        }
    }

}
