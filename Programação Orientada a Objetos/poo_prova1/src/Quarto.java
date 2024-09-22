import java.util.Scanner;

public class Quarto {
   int numeroQuarto;
   String tipo;
   int precoPorDiaria;
   int quantidadeDeEstadia;
   boolean status = false; 

   public Quarto(int numeroQuarto, String tipo, int precoPorDiario){
      this.numeroQuarto = numeroQuarto;
      this.tipo = tipo;
      this.precoPorDiaria = precoPorDiario;
   }

   public void reservarQuarto() {
      Scanner sc = new Scanner(System.in);
      System.out.println("Voce deseja reservar este quarto de numero "+ numeroQuarto +" ?: (true/false");
      status = sc.nextBoolean();
      if (status) {
         System.out.println("quarto reservado!");
      }
      else{
         System.out.println("Quarto nao reservado!");
      }
   }

   public void liberarQuarto() {
      Scanner sc = new Scanner(System.in);
      System.out.println("Voce deseja liberar este quarto de numero"+ numeroQuarto +"?: (true/false");
      status = sc.nextBoolean();
      if (status) {
         System.out.println("quarto liberado!");
      }
      else{
         System.out.println("Quarto nao liberado!");
      }
   }

   public int caucularValorEstadia(int quantidadeDeEstadia){
      return precoPorDiaria * quantidadeDeEstadia;
   }

}
