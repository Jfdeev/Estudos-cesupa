public class Task {
    String titulo;
    String descricao;
    boolean concluido = false;
  
    // Construtor da tarefa
    // Cria uma nova tarefa inserindo titulo e descrição
    public Task(String titulo, String descricao) {
      this.titulo = titulo;
      this.descricao = descricao;
    }
  
    // Metodo get do atributo titulo
    public String getTitulo() {
      return titulo;
    }
  
    // Metodo set do atributo titulo
    public void setTitulo(String titulo) {
      this.titulo = titulo;
    }
  
    // Metodo get do atributo descricao
    public String getDescricao() {
      return descricao;
    }
  
    // Metodo set do atributo descricao
    public void setDescricao(String descricao) {
      this.descricao = descricao;
    }
  
    // Metodo para marcar a tarefa como concluida
    public boolean marcarComoConcluido() {
      this.concluido = true;
      return this.concluido;
    }
  }