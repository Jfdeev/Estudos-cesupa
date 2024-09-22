import java.time.LocalDate;
import java.util.Scanner;

public class Livro {

    int pagina;
    String titulo;
    boolean aberto = false;
    int largura;
    int comprimento;
    int peso;
    int anoPublicacao;
    int marcarPagina;

    LocalDate hoje;
    
    
    public int getPagina() {
        return pagina;
    }

    public void setPagina(int pagina) {
        this.pagina = pagina;
    }

    public int getLargura() {
        return largura;
    }

    public void setLargura(int largura) {
        this.largura = largura;
    }

    public int getComprimento() {
        return comprimento;
    }

    public void setComprimento(int comprimento) {
        this.comprimento = comprimento;
    }

    public String getTitulo() {
        return titulo;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }

    public int getAnoPublicado() {
        return anoPublicacao;
    }

    public void setAnoPublicado(int anoPublicacao) {
        this.anoPublicacao = anoPublicacao;
    } 

    public void marcarPagina(int marcarPagina) {
        this.marcarPagina = marcarPagina;
    }

    public int getPaginaMarcada() {
        return marcarPagina;
    }

    public boolean abrirLivro(int escolha) {
        if (escolha == 1) {
            aberto = true;
        }
        else{
            aberto = false;
        }

        return aberto;
    }

    public int caucularAreaLivro(int largura, int comprimento) {
        return largura * comprimento;
    }

    public int pesoLivro(int pagina) {
        return peso = (int) (pagina * 0.0012);
    }

    public int idadeLivro() {
        hoje = LocalDate.now();
        int anoAtual = hoje.getYear();
        return anoAtual - this.anoPublicacao;
    }

    public String toString() {
        return "Livro de " + pagina + " paginas, e seu titulo é " + titulo + " ,ele esta aberto ?: " + aberto + " A idade do livro é " + idadeLivro() + " ,o seu peso é: "  + pesoLivro(pagina) + " a area dele é: " + caucularAreaLivro(largura, comprimento) + " e esta com uma pagina marcada que é: " + marcarPagina;
    }
}
