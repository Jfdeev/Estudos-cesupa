public class App {
    public static void main(String[] args) throws Exception {
        Livraria l1 = new Livraria();
        Livro livro01 = new Livro("Transformers", "mayk brito", 120, 10);
        Livro livro02 = new Livro("Programcao", "mayk brito", 50, 20);
        Livro livro03 = new Livro("Vingadores", "mayk brito", 150, 40);
        Livro livro04 = new Livro("Coisa", "mayk brito", 150, 12);
        Livro livro05 = new Livro("Miranha", "mayk brito", 160, 1000);
        Livro livro06 = new Livro("Malalaico", "mayk brito", 130, 3);

        l1.livros[0] = livro01;
        l1.livros[1] = livro02;
        l1.livros[2] = livro03;
        l1.livros[3] = livro04;
        l1.livros[4] = livro05;
        l1.livros[5] = livro06;

        System.out.println(l1.totalArrecadado(0));
        l1.livroMaisVendido();

    }
}
