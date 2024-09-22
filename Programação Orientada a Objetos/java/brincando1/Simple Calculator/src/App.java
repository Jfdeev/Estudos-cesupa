public class App {
    public static void main(String[] args) throws Exception {

        System.out.println("Vamos fazer uma calculadora");
        System.out.println("Selecione uma operação");
        System.out.println("1 - Soma");
        System.out.println("2 - Subtração");
        System.out.println("3 - Multiplicação");
        System.out.println("4 - Divisão");

        Calc c = new Calc();
        c.Solicitar();
        c.Solicitar2();
    }
}
