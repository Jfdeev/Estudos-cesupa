package src;

import java.util.ArrayList;
import java.util.List;

public class App {
    public static void main(String[] args) {
      // Instancia uma nova lista de tarefas
      List<Task> tasks = new ArrayList<Task>();
      // Criar uma nova tarefa e adicionar na lista
      tasks.add(new Task("Entregando TC", "Isaac pediu"));
      tasks.add(new Task("Entregando TC1", "Isaac pediu3"));
      tasks.add(new Task("Entregando TC2", "Isaac pediu4"));
  
      // Listar tarefas no terminal
      for (Task task : tasks) {
        System.out.println(task.titulo);
      }
  
      // Remover tarefa na posição 1
      tasks.remove(1);
      for (Task task : tasks) {
        System.out.println(task.titulo);
      }
  
      // String para buscar dentro dos titulos
      String busca = "TC1";
  
      // Loop forEach 
      for (Task task : tasks) {
        // Se a string titulo possui a string de busca
        if (task.getTitulo().contains(busca)) {
          System.out.println("Encontrei!");
        }
        if (task.getTitulo().contains(busca)) {
          // Caso encontre mude para concluido
          task.marcarComoConcluido();
          System.out.println(task.concluido);
        }
      }
    }
  }