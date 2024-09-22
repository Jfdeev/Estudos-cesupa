public class App {
    public static void main(String[] args) throws Exception {
        Clinica clinica = new Clinica();

        clinica.adicionarCliente(new Clientes("maria", 29));
        clinica.adicionarCliente(new Clientes("joao", 34));
        clinica.adicionarCliente(new Clientes("ana", 37));
        clinica.adicionarCliente(new Clientes("pedro", 25));
        clinica.adicionarCliente(new Clientes("lucas", 40));

        clinica.exibirFila();

        System.out.println("\nAtendendo Cliente.... \n" + clinica.proximoCliente());

        System.out.println("\nFila de espera atualizada: ");
        clinica.exibirFila();
    }
}
