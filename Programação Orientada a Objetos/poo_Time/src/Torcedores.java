import java.util.Scanner;

public class Torcedores {
    int jogosAssistidos;
    boolean socio;
    boolean pag1;
    boolean pag2;
    boolean pag3;
    boolean pag4;
    String nome;

    Tecnico tec;
    Time tm;

    public Torcedores(){

    }

    public Torcedores(String nome, int jogosAssistidos, boolean socio, Time tm, Tecnico tec) {
        this.nome = nome;
        this.jogosAssistidos = jogosAssistidos;
        this.socio = socio;
        this.tm = tm;
        this.tec = tec;
    }

    public void solicitarPagamentos(){
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        if (socio) {
            System.out.println("O torcedor " + nome + " realizou o primeiro pagamento ? (true or false)");
            pag1 = sc.nextBoolean();
            System.out.println("O torcedor " + nome + "realizou o segundo pagamento ? (true or false)");
            pag2 = sc.nextBoolean();
            System.out.println("O torcedor " + nome + "realizou o terceiro pagamento ? (true or false)");
            pag3 = sc.nextBoolean();
            System.out.println("O torcedor " + nome + "realizou o quarto pagamento ? (true or false)");
            pag4 = sc.nextBoolean();
        }
        else{
            System.out.println("Não há pagamentos");
        }
    }

    public String toString() {
        return "Nome time: " + tm.nome + "\n" + 
                "Tecnico: " +  tec.nome + "\n" + 
                "Anos de Experiencia: " + tec.anosExperiencia + "\n" + 
                "Torcedor: " + nome + "\n" + 
                "Socio: " + socio + "\n" + 
                "Jogos assistidos: " + jogosAssistidos + "\n" + 
                "Pagamentos: " + pag1 + "\n" +
                "Pagamentos: " + pag2 + "\n" +
                "Pagamentos: " + pag3 + "\n" +
                "Pagamentos: " + pag4 + "\n";
    }

}
