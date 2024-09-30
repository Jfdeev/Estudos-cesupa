package main.java.seu_pacote.seu_pacote;

public class GestorEventos {
    private Eventos[] eventos;
    private int quantidadeEventos;

    public GestorEventos() {
        eventos = new Eventos[10];
        quantidadeEventos = 0;
    }

    public void cadastrarEvento(String nome, String data, String local, int capacidadeMaxima, String categoria) {
        if (quantidadeEventos < 10) {
            eventos[quantidadeEventos] = new Eventos(nome, data, local, capacidadeMaxima, categoria);
            quantidadeEventos++;
        } else {
            System.out.println("Limite de eventos atingido.");
        }
    }

    public void listarEventos() {
        for (int i = 0; i < quantidadeEventos; i++) {
            System.out.println(eventos[i]);
            System.out.println("-----------");
        }
    }

    public Eventos buscarEventoPorNome(String nome) {
        for (int i = 0; i < quantidadeEventos; i++) {
            if (eventos[i].getNome().equalsIgnoreCase(nome)) {
                return eventos[i];
            }
        }
        return null;
    }

    public boolean inscreverEmEvento(String nome) {
        Eventos evento = buscarEventoPorNome(nome);
        if (evento != null) {
            return evento.inscreverParticipante();
        }
        return false;
    }
}