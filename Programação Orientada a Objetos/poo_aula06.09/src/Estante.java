import java.util.ArrayList;


public class Estante {
    ArrayList<Livro> lvs = new ArrayList<Livro>();

    //construtor
    public Estante() {
        
    }

    //add livro a estante
    public void adicionarLivro(Livro lv){
        lvs.add(lv);
        System.out.println("Livro adicionado: " + lv.getTitulo());
    }

    public void removerLivro(int indice) {
        if (indice >= 0 && indice < lvs.size()) {
            Livro removido = lvs.remove(indice);
            System.out.println("Livro removido: " + removido.getTitulo());
        } else {
            System.out.println("Indice Inválido.");
        }
    }

    public void mostrarLivros() {
        if (lvs.isEmpty()) {
            System.out.println("A estante esta vazia");
        } else {
            for(int i = 0; i < lvs.size(); i++) {
                Livro livro = lvs.get(i);
                System.out.println("Livro " + (i+1) + ": " + livro.getTitulo());
            }
        }
    }

}
