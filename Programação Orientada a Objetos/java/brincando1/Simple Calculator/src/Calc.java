import java.util.Scanner;

public class Calc{
    Scanner sc = new Scanner(System.in);

    double n1;
    double n2;
    int choose;
    double resultado;

    public void Solicitar(){
        this.choose = sc.nextInt();
    }

    public void Solicitar2(){
        System.out.println("Digite o primeiro número");
        this.n1 = sc.nextDouble();
        System.out.println("Digite o segundo número");
        this.n2 = sc.nextDouble();

        switch (choose) {
            case 1:
                soma();
                resposta();
                break;
            case 2:
                subt();
                resposta();
                break;
            case 3:
                multi();
                resposta();
                break;
             case 4:
                div();
                resposta();
                break;
            default:
                break;
        }
    }

    public double getN1() {
        return n1;
    }
    public void setN1(double n1) {
        this.n1 = n1;
    }


    public double getN2() {
        return n2;
    }
    public void setN2(double n2) {
        this.n2 = n2;
    }


    public double getResultado() {
        return resultado;
    }

    public void setResultado(double resultado) {
        this.resultado = resultado;
    }

    public int getChoose() {
        return choose;
    }
    public void setChoose(int choose) {
        this.choose = choose;
    }
    
    public void soma(){
        this.resultado = getN1() + getN2();
    }

    public void subt(){
        this.resultado = getN1() - getN2();
    }

    public void multi(){
        this.resultado = getN1() * getN2();
    }

    public void div(){
        this.resultado = getN1() / getN2();
    }

    public void resposta(){
        System.out.println("Resultado: " + getResultado());
    }
}

