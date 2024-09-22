public class App {
    public static void main(String[] args) throws Exception {
        Projeto p = new Projeto();

        Estudante a1 = new Estudante("Diniz", 1);
        Estudante a2 = new Estudante("Ricardo", 2);
        Estudante a3 = new Estudante("Luis", 3);
        Estudante a4 = new Estudante("Ronald", 5);
        
        p.est[0] = a1;
        p.est[1] = a2;
        p.est[2] = a3;
        p.est[3] = a4;

        p.Soliciar();
        p.Print();
    }
}
