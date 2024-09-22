import java.util.Random;
import java.util.Scanner;

public class Estudante {
    String nome = "";
    int id;
    Random rand = new Random();
    Scanner sc = new Scanner(System.in);
    int flag = 0;
    int cont = 0;
    int limite1 = 2;

    boolean[] meta = new boolean[5];

    public Estudante(String nome, int id){
        this.nome = nome;
        this.id = id;
    }

    public boolean resultado(){
        boolean resultado =  false;

        for (int i = 0; i < 5; i++) {
            flag =  rand.nextInt(limite1);
            if (flag == 1) {
                meta[i] = true;
            }else{
                meta[i] = false;
            }
        }

        for (int i = 0; i < 5; i++) {
            if (meta[i] == true) {
                cont++;
            }
        }

        if (cont >= 3) {
            resultado = true;
        }

        return resultado;
    }
}
