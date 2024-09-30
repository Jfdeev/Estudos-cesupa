public class App {
    public static void main(String[] args) throws Exception {
        Pessoa p1 = new Pessoa("João", "Clay", "Izabel");
        Pessoa p2 = new Pessoa("Joao");

        p1.pessoasIguais(p2);
        p1.pessoasIrmaos(p2);
    }
}
