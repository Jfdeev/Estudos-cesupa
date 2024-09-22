public class App {
    public static void main(String[] args) throws Exception {
        Empresas empresas = new Empresas();
        empresas.setNome("Miranha");
        Clientes cl1 = new Clientes("Diniz", 123.456, 18);
        Clientes cl2 = new Clientes("Murilo", 123.654, 22);
        Clientes cl3 = new Clientes("Pedro", 456.123, 21);
        empresas.clientes[0] = cl1;
        empresas.clientes[1] = cl2;
        empresas.clientes[2] = cl3;
        Moveis mv1 = new Moveis("7652387-18", 100, false);
        Moveis mv2 = new Moveis("8623973-862", 60, true);
        Moveis mv3 = new Moveis("7539037-093", 12, false);
        empresas.moveis[0] = mv1;
        empresas.moveis[1] = mv2;
        empresas.moveis[2] = mv3;

        empresas.imprimirClientes();
        empresas.imprimirMoveis();
    }
}
