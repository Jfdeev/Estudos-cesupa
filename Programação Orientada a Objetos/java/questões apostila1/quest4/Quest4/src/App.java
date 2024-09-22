public class App {
    public static void main(String[] args) throws Exception {
        disciplina d = new disciplina("matematica");
        aluno a1 = new aluno();
        aluno a2 = new aluno();
        aluno a3 = new aluno();
        aluno a4 = new aluno();
        aluno a5 = new aluno();
        aluno a6 = new aluno();

        a1.nome = "Aluno1";
        a2.nome = "Aluno2";
        a3.nome = "Aluno3";
        a4.nome = "Aluno4";
        a5.nome = "Aluno5";
        a6.nome = "Aluno6";

        d.alunos[0] = a1;
        d.alunos[1] = a2;
        d.alunos[2] = a3;
        d.alunos[3] = a4;
        d.alunos[4] = a5;
        d.alunos[5] = a6;

        d.darNotas();
        d.imprimir();
    }
}
