public class Cauculadora {
    public double soma(double num1, double num2){
        return num1 + num2;
    }

    public double sub(double num1, double num2){
        return num1 - num2;
    }

    public double mult(double num1, double num2){
        return num1 * num2;
    }
    public int div(double num1, double num2){
        if (num2 != 0) {
            return (int) (num1 / num2);
        }else{
            System.out.println("Erro!, Numero dividido por 0");
        }
        return 0;
    }
}
