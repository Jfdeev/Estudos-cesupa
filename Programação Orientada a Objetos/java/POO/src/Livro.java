public class Livro {
    String titulo = ""; 
    String autor = "";
    String sinopse = "";
    String data_lancamento = "";
    int paginas = 0;
    int n_capitulos = 0;
    
    public String titulo(String titulo){
        this.titulo = titulo;
        return titulo;
    }
}