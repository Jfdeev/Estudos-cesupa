public class Livraria {

    String nome;
    String loc;
    int quantidadeLivro;
    int venda;
    int maiorQuantidadeVenda = 0;
    int numeroLivro;
    int i;


    Livro[] livros = new Livro[6];
    Gerente gerente = new Gerente();


    public int totalArrecadado(int numeroLivro){
        return livros[numeroLivro].preco * livros[numeroLivro].quantidadeVenda;
    }

    public void livroMaisVendido(){
        for(i=0;i>livros.length;i++){
            venda = livros[i].quantidadeVenda;
            if (maiorQuantidadeVenda < venda) {
                maiorQuantidadeVenda = venda;
            }
            else{
                System.out.println("n foi mais vendido");
            }   
        }

        System.out.println(maiorQuantidadeVenda);
    }
}