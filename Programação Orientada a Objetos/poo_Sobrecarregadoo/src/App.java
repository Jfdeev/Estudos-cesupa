

public class App {
    public static void main(String[] args) throws Exception {
        Carga c = new Carga(12, "Carga1", "Brinquedo");
        Carga c2 = new Carga(12, "Carga2", "Eletronicos");
        Cliente cliente1 = new Cliente("jose", 34, 123456789);
        Cliente cliente2 = new Cliente("joao", 32, 432678543);

        c.clientes[0] = cliente1;
        c2.clientes[1] = cliente2;

        c.imprimirDadosCargas();
    }
}
