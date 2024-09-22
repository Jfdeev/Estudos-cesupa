import java.util.Scanner;

public class Projeto {

    String titulo;
    String dataInicio;
    String descricao;
    Mentor mentor = new Mentor();
    Estudante[] estudantes = new Estudante[4];

    public Projeto(String titulo, String dataInicio, String descricao){
        this.titulo = titulo;
        this.dataInicio = dataInicio;
        this.descricao = descricao;
    }

    public void vincularMentorProjeto(){
        System.out.println("O mentor do projeto é: "+mentor.nome+" e seu projeto se chama: "+this.titulo);
    }

    public void verificarMetas(){
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);

        int i;
        for(i = 0; i < 4;i++){
            System.out.println("Verifique as metas do Estudante: "+this.estudantes[i].nome+" e o seu id é: "+this.estudantes[i].id);

            System.out.println("A 1ª meta foi alcançada? (true ou false)");
            this.estudantes[i].meta1 = sc.nextBoolean();
            if(this.estudantes[i].meta1 == true){
                this.estudantes[i].contadorMeta ++;
            }

            System.out.println("A 2ª meta foi alcançada? (true ou false)");
            this.estudantes[i].meta2 = sc.nextBoolean();
            if(this.estudantes[i].meta2 == true){
                this.estudantes[i].contadorMeta ++;
            }

            System.out.println("A 3ª meta foi alcançada? (true ou false)");
            this.estudantes[i].meta3 = sc.nextBoolean();
            if(this.estudantes[i].meta3 == true){
                this.estudantes[i].contadorMeta ++;
            }

            System.out.println("A 4ª meta foi alcançada? (true ou false)");
            this.estudantes[i].meta4 = sc.nextBoolean();
            if(this.estudantes[i].meta4 == true){
                this.estudantes[i].contadorMeta ++;
            }

            System.out.println("A 5ª meta foi alcançada? (true ou false)");
            this.estudantes[i].meta5 = sc.nextBoolean();
            if(this.estudantes[i].meta5 == true){
                this.estudantes[i].contadorMeta ++;
            }

            if(this.estudantes[i].contadorMeta >= 3){
                this.estudantes[i].metaAlcancada = true;
            }else{
                this.estudantes[i].metaAlcancada = false;
            }
        }
    }


    public void imprimir(){
        int i;
        for(i = 0; i < 4;i++){
            System.out.println("Nome do estudante: "+this.estudantes[i].nome+"\na 1ª meta foi alcançada: "+this.estudantes[i].meta1+"\na 2ª meta foi alcançada: "+this.estudantes[i].meta2+"\na 3ª meta foi alcancada: "+this.estudantes[i].meta3+"\na 4ª meta foi alcancada: "+this.estudantes[i].meta4+"\na 5ª meta foi alcandada: "+this.estudantes[i].meta5+"\nQual foi o total de metas alcancadas: "+this.estudantes[i].contadorMeta+"\nO projeto foi bem sucedido?"+this.estudantes[i].metaAlcancada);

        }
    }
    
}