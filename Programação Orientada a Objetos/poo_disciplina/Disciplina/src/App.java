public class App {
    public static void main(String[] args) throws Exception {
        Disciplina d1 = new Disciplina();
        Aluno aluno1 = new Aluno();
        Aluno aluno2 = new Aluno();
        Aluno aluno3 = new Aluno();
        Aluno aluno4 = new Aluno();
        Aluno aluno5 = new Aluno();
        Aluno aluno6 = new Aluno();

        aluno1.nome = "Aluno 1";
        aluno2.nome = "Aluno 2";
        aluno3.nome = "Aluno 3";
        aluno4.nome = "Aluno 4";
        aluno5.nome = "Aluno 5";
        aluno6.nome = "Aluno 6";

        d1.alunos[0] = aluno1;
        d1.alunos[1] = aluno2;
        d1.alunos[2] = aluno3;
        d1.alunos[3] = aluno4;
        d1.alunos[4] = aluno5;
        d1.alunos[5] = aluno6;

        d1.darNotas();
        d1.imprimir();
    }
}
