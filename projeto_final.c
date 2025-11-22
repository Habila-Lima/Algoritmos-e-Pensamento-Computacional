#include <stdio.h>





//Função do calculo da média das notas

float calcularMedia(float notas[], int tamanho);



//Função p/ encontrar a maior nota no vetor.

float maiorNota(float notas[], int tamanho);



//Função p/ encontrar a menor nota no vetor

float menorNota(float notas[], int tamanho);



// --- Implementação das Funções (Simulando estatistica.c) ---





//Função do calculo de média de notas

float calcularMedia(float notas[], int tamanho) {

  if (tamanho <= 0) {

    return 0.0f;

  }



  float soma = 0.0f;

  for (int i = 0; i < tamanho; i++) {

    soma += notas[i];

  }

  return soma / tamanho;

}





//Função para encontrar a maior nota dentro de uma array(vetor).

float maiorNota(float notas[], int tamanho) {

  if (tamanho <= 0) {

    return 0.0f;

  }



  float max = notas[0];

  for (int i = 1; i < tamanho; i++) {

    if (notas[i] > max) {

      max = notas[i];

    }

  }

  return max;

}





//Função para encontrar a menor nota dentro uma array(vetor).

float menorNota(float notas[], int tamanho) {

  if (tamanho <= 0) {

    return 0.0f;

  }



  float min = notas[0];

  for (int i = 1; i < tamanho; i++) {

    if (notas[i] < min) {

      min = notas[i];

    }

  }

  return min;

}





#define NUM_NOTAS 5 //atribuindo 5 a variavel.



int main() {

  // Declarando o tamanho da array e atribuindo as notas.

  float notas[NUM_NOTAS] = {7.5, 8.0, 6.5, 9.0, 7.0}; 

  int opcao;



  printf("--- Programa de Análise Estatística de Notas ---\n");

  printf("Notas Registradas: ");

  for (int i = 0; i < NUM_NOTAS; i++) {

    printf("%.1f ", notas[i]);

  }

  printf("\n");



  do {

    printf("\n--- Menu ---\n");

    printf("1. Calcular Média\n");

    printf("2. Encontrar Maior Nota\n");

    printf("3. Encontrar Menor Nota\n");

    printf("0. Sair\n");

    printf("Escolha uma opção: ");



    if (scanf("%d", &opcao) != 1) {

      printf("\nEntrada inválida. Limpando o buffer.\n");

      while (getchar() != '\n'); 

      opcao = -1; 

      continue;

    }



    switch (opcao) {

      case 1:

         

        printf("\nResultado: Média das Notas = %.2f\n", calcularMedia(notas, NUM_NOTAS));

        break;

      case 2:

        printf("\nResultado: Maior Nota Encontrada = %.2f\n", maiorNota(notas, NUM_NOTAS));

        break;

      case 3:

        printf("\nResultado: Menor Nota Encontrada = %.2f\n", menorNota(notas, NUM_NOTAS));

        break;

      case 0:

        printf("\nEncerrando...\n");

        break;

      default:

        printf("\nOpção inválida (%d). Por favor, escolha 0, 1, 2 ou 3.\n", opcao);

        break;

    }

  } while (opcao != 0);



  return 0;

}