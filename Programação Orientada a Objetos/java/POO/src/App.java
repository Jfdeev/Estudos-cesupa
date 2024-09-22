public class App {
    public static void main(String[] args) throws Exception {
        Cadastrar cd = new Cadastrar();
        for (int i = 0; i < 10; i++) {
            Livro lv = new Livro();
        }

        
        cd.cadastrar();
        cd.imprimir();
    }
}
