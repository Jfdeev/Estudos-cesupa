import java.util.Scanner;

public class Projeto {
    String titulo = "";
    String data_inicio = "";
    String descricao = "";
    String[] resultado = new String[4];
    Mentor met = new Mentor("Isaac", "muitos anos", "xxxx-xxxx");

    Scanner sc = new Scanner(System.in);
    Estudante[] est = new Estudante[4];

    public void Soliciar(){
        for (int i = 0; i < 4; i++) {
            if(est[i].resultado() == true){
                resultado[i] = "Aprovado";
            }else{
                resultado[i] = "Reprovado";
            }
        }
    }

    public void Print(){
        System.out.println("Mentor do projeto: " + met.nome);
        for (int i = 0; i < 4; i++) {
            System.out.println("\nNome: " + this.est[i].nome+ "\nID: "+ this.est[i].id + "\nResultado: "+ resultado[i] + "\n");
        }
    }
    
}
