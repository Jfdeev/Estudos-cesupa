package main.java.seu_pacote.seu_pacote;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;


class GestorDeEventosTest {

    private GestorDeEventos gestor;

    @BeforeEach
    void setUp() {
        gestor = new GestorDeEventos();
        gestor.cadastrarEvento("Show de Rock", "25/10/2024", "Estádio Central", 5000, "VIP");
        gestor.cadastrarEvento("Conferência de TI", "15/11/2024", "Centro de Convenções", 300, "Camarote");
    }

    @Test
    void testCadastrarEvento() {
        // Teste se o evento foi cadastrado corretamente
        assertEquals(2, gestor.getTotalEventos()); // Você precisará de um método getTotalEventos()
    }

    @Test
    void testInscreverParticipante() {
        // Testa a inscrição em um evento com vagas disponíveis
        boolean inscricao = gestor.inscreverParticipante("Show de Rock");
        assertTrue(inscricao, "Inscrição deve ser bem-sucedida");
        
        // Testa se a vaga foi reduzida
        assertEquals(4999, gestor.getEventos()[0].getVagasDisponiveis()); // Supondo que você tenha um método getEventos()
    }

    @Test
    void testInscricaoEventoEsgotado() {
        // Inscrever participantes até esgotar as vagas
        for (int i = 0; i < 5000; i++) {
            gestor.inscreverParticipante("Show de Rock");
        }
        
        // Tentativa de inscrição quando o evento está esgotado
        boolean inscricao = gestor.inscreverParticipante("Show de Rock");
        assertFalse(inscricao, "Inscrição não deve ser bem-sucedida, evento esgotado");
    }

    @Test
    void testBuscarEvento() {
        // Teste a busca por evento
        String detalhes = gestor.buscarEvento("Conferência de TI");
        assertNotNull(detalhes, "Evento deve ser encontrado");
        assertTrue(detalhes.contains("Conferência de TI"), "Detalhes devem conter o nome do evento");
    }
}