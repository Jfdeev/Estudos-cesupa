public class Retangulo {
    int base = 5;
    int altura = 10;


    public void solcitarDados(int base, int altura){
        this.base = base;
        this.altura = altura;
    }

    public String imprimirDados(){
        return "Base: "  + base + " Altura: " + altura;
    }

    public int getBase() {
        return base;
    }

    public void setBase(int base) {
        this.base = base;
    }

    public int getAltura() {
        return altura;
    }

    public void setAltura(int altura) {
        this.altura = altura;
    }

    public void imcrementarAltura(){
        this.altura = altura + 1;
    }

    public void imcrementarBase(){
        this.base = base + 1;
    }

    public void decrementarAltura(){
        this.altura = altura - 1;
    }

    public void decrementarBase() {
        this.base = base - 1;
    }

    public int perimetroRetan(){
        return this.altura + this.base;
    }

    public int areaRetan(){
        return this.altura * this.base;
    }
}
