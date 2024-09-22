public class App {
    public static void main(String[] args) throws Exception {
        Retangulo re = new Retangulo();

        re.solcitarDados(10, 10);
        re.imprimirDados();
        re.imcrementarAltura();
        re.imcrementarBase();
        re.perimetroRetan();
        re.areaRetan();
        re.imprimirDados();
    }
}
