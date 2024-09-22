import java.util.Scanner;

public class Roupa {
    private int numeroBuracos;
    private String parteCorpo;


    public Roupa(int numeroBuracos, String parteCorpo) {
        this.numeroBuracos = numeroBuracos;
        this.parteCorpo = parteCorpo;
    }


    public int getNumeroBuracos() {
        return this.numeroBuracos;
    }


    public String getParteCorpo() {
        return this.parteCorpo;
    }

    public void coverterMaiusculo(){
        this.parteCorpo = this.parteCorpo.toUpperCase();
    }

    public void condRoupa(){
        Scanner sc = new Scanner(System.in);
        if (getNumeroBuracos() == 4 && getParteCorpo().equals("TORAX")) {
            System.out.println("Camisa");
        }
        else if (getNumeroBuracos() == 3 && getParteCorpo().equals("PERNA")) {
            System.out.println("CALÇA");
        }
        else if (getNumeroBuracos() == 1 && getParteCorpo().equals("PE") ) {
            System.out.println("SAPATO");
        }else{
            System.out.println("Não foi encomtrado o tipo de roupa!");
        }
        sc.close();
    }
    

}
