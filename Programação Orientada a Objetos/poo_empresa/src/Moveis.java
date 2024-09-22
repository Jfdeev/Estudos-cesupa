public class Moveis{
    private String cep;
    private int area;
    private boolean validacao = false;

    
    public Moveis(String cep, int area, boolean validacao) {
        this.cep = cep;
        this.area = area;
        this.validacao = validacao;
    }


    public String getCep() {
        return cep;
    }


    public int getArea() {
        return area;
    }


    public boolean isValidacao() {
        return validacao;
    }

    
}