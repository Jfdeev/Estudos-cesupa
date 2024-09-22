public class App {
    public static void main(String[] args) throws Exception {
        Quarto q01 = new Quarto(1, "solo", 100);
        Quarto q02 = new Quarto(2, "Suite", 200);

        q01.reservarQuarto();
        q02.reservarQuarto();

        System.out.println(q01.caucularValorEstadia(2));
        System.out.println(q02.caucularValorEstadia(2));
        
    }
}
