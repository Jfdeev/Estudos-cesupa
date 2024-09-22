public class Time {
    String nome;
    String nomeTecnico;

    Tecnico tec = new Tecnico();

    public Time() {

    }

    public Time(String nome) {
        this.nome = nome;
    }

    public void vincularTecnico() {
        this.nomeTecnico = tec.nome;
    }
    
}
