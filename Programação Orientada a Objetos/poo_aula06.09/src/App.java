import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        Livro lv = new Livro();
        lv.setTitulo("Introdução a Programação");
        lv.setAnoPublicado(2015);
        lv.setPagina(350);
        lv.setLargura(15);
        lv.setComprimento(22);
        lv.marcarPagina(250);
        lv.abrirLivro(1);
        Estante estante = new Estante();
        
        estante.adicionarLivro(lv);

        //estante.removerLivro(0);
        estante.mostrarLivros();

        System.out.println(lv.toString());
    }
}
