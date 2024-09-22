public class task{
    String titulo;
    String descricao;
    boolean status =  false;

    public task(String titulo, String descricao){
        this.titulo = titulo;
        this.descricao = descricao;
    }

    public String getTitulo(){
        return titulo;
    }

    public void setTitulo(String titulo){
        this.titulo = titulo;
    }

    public String getDescricao(){
        return descricao;
    }

    public void setDescricao(String titulo){
        this.descricao = descricao;
    }
}