import java.util.Scanner;

public class Retangulo {
    double base = 0;
    double altura = 0;
    double resultado = 0;

    public void solicitarDados(){
        Scanner sc = new Scanner(System.in);

        System.out.println("Insira um vaor para a base: ");
        this.base = sc.nextDouble();
        System.out.println("Insira um valor para a altura: ");
        this.altura = sc.nextDouble();
    }

    public void imprimir() {
        System.out.println("O valor da base é: "+getBase()+" e o da altura é: "+getAltura());
        System.out.println("A área da é: "+getResultado());
    }
    
    public void setBase(double base){
        this.base = base;
    }
    
    
    public void setAltura(double altura){
        this.altura = altura;
    }

    public double getBase() {
        return base;
    }

    public double getAltura() {
        return altura;
    }

    public void resultado(double resultado){
        resultado = (base * altura) / 2;
    }

    public double getResultado() {
        return resultado;
    }

    public void setResultado(double resultado) {
        this.resultado = resultado;
    }
    

}




