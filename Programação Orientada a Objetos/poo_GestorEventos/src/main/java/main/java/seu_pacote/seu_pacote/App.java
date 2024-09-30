package main.java.seu_pacote.seu_pacote;
import java.util.Scanner;

public class App {
    public static void main(String[] args) {
        GestorEventos gestor = new GestorEventos();
        Scanner scanner = new Scanner(System.in);

        // Exemplo de interface simples para interação
        int opcao;
        do {
            System.out.println("\n1. Cadastrar evento");
            System.out.println("2. Listar eventos");
            System.out.println("3. Inscrever em evento");
            System.out.println("4. Buscar evento por nome");
            System.out.println("0. Sair");
            System.out.print("Escolha uma opção: ");
            opcao = scanner.nextInt();
            scanner.nextLine();  // Limpar o buffer

            switch (opcao) {
                case 1:
                    System.out.print("Nome do evento: ");
                    String nome = scanner.nextLine();
                    System.out.print("Data do evento: ");
                    String data = scanner.nextLine();
                    System.out.print("Local do evento: ");
                    String local = scanner.nextLine();
                    System.out.print("Capacidade máxima: ");
                    int capacidadeMaxima = scanner.nextInt();
                    scanner.nextLine();  // Limpar o buffer
                    System.out.print("Categoria (Camarote, VIP, etc.): ");
                    String categoria = scanner.nextLine();
                    gestor.cadastrarEvento(nome, data, local, capacidadeMaxima, categoria);
                    break;
                case 2:
                    gestor.listarEventos();
                    break;
                case 3:
                    System.out.print("Nome do evento para inscrição: ");
                    String nomeEvento = scanner.nextLine();
                    if (gestor.inscreverEmEvento(nomeEvento)) {
                        System.out.println("Inscrição realizada com sucesso!");
                    } else {
                        System.out.println("Evento lotado ou não encontrado.");
                    }
                    break;
                case 4:
                    System.out.print("Nome do evento a ser buscado: ");
                    String buscaNome = scanner.nextLine();
                    Eventos eventoEncontrado = gestor.buscarEventoPorNome(buscaNome);
                    if (eventoEncontrado != null) {
                        System.out.println(eventoEncontrado);
                    } else {
                        System.out.println("Evento não encontrado.");
                    }
                    break;
                case 0:
                    System.out.println("Saindo...");
                    break;
                default:
                    System.out.println("Opção inválida.");
            }
        } while (opcao != 0);

        scanner.close();
    }
}