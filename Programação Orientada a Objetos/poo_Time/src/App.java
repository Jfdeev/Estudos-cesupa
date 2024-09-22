public class App {
    public static void main(String[] args) throws Exception {
        Time tm = new Time("Barcelona FC");
        Tecnico tec = new Tecnico("Zidane", 12);
        tm.vincularTecnico();
        Torcedores torc1 = new Torcedores("José", 12, true, tm, tec);
        Torcedores torc2 = new Torcedores("Carol", 4, false, tm, tec);
        Torcedores torc3 = new Torcedores("Pedro", 7, true, tm, tec);
        torc1.solicitarPagamentos();
        torc2.solicitarPagamentos();
        torc3.solicitarPagamentos();

        System.out.println(torc1.toString());
        System.out.println(torc2.toString());
        System.out.println(torc3.toString());
    }
}
