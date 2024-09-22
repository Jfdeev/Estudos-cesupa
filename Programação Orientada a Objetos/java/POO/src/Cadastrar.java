import java.util.Scanner;

public class Cadastrar {
    Scanner sc = new Scanner(System.in);

    Livro[] lv = new Livro[10];

    public void cadastrar(){

        for (int i = 0; i < 10; i++) {
            System.out.println("Digite o nome do livro: ");
            this.lv[i].titulo = sc.nextLine();
        }
        

        /*System.out.println("Digite o nome do autor do livro: ");
        this.lv[0].autor = sc.nextLine();

        System.out.println("Digite a sinopse do livro:");
        this.lv[0].sinopse = sc.nextLine();

        System.out.println("Digite a data de lançamento com barras (ex: xx/xx/xxxx): ");
        this.lv[0].data_lancamento = sc.nextLine();

        System.out.println("Digite o número de paginas que esse livro tem: ");
        this.lv[0].paginas = sc.nextInt();

        System.out.println("Digite o numero de capítulos desse livro: ");
        this.lv[0].n_capitulos = sc.nextInt(); */
    }

    public void imprimir(){
        System.out.println("\n\n\n");
        for (int i = 0; i < lv.length; i++) {
            System.out.println("Livro "+ i+1 +": " + lv[i].titulo);
        }
        
        /*System.out.println("Autor: " + lv[0].autor);
        System.out.println("Sinopse: " + lv[0].sinopse);
        System.out.println("Data de lançamento: " + lv[0].data_lancamento);
        System.out.println("Número de páginas: " + lv[0].paginas);
        System.out.println("Número de capítulos: " + lv[0].n_capitulos);*/
    }
}
