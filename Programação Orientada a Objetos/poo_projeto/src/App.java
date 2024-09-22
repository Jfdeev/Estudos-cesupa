public class App {
    public static void main(String[] args) throws Exception {

        Projeto proj = new Projeto("Projeto 1", "09/09/2024", "Esse é um projeto");
        Mentor mentor1 = new Mentor("ISaac", 6, "mentor@mail.com");

        Estudante estudante1 = new Estudante("João", 1);
        Estudante estudante2 = new Estudante("Pedro", 2);
        Estudante estudante3 = new Estudante("Paulo", 3);
        Estudante estudante4 = new Estudante("Girotto", 4);

        proj.estudantes[0] = estudante1;
        proj.estudantes[1] = estudante2;
        proj.estudantes[2] = estudante3;
        proj.estudantes[3] = estudante4;
        proj.mentor = mentor1;

        proj.vincularMentorProjeto();
       proj.verificarMetas();
       proj.imprimir();






    }
}