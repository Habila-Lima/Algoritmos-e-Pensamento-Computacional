#include <stdio.h>

int main() {
    float nota; // Declarando a variável.

    printf("Digite sua nota: "); //Mensagem para o usuário inserir a nota.
     
    if (scanf("%f", &nota) != 1) { //Caso o usuário der enter ou inserir algo diferente de um nº será dado como entrada inválida.
        printf("Erro: Entrada inválida. Por favor, digite um número.\n");// Mensagem da entrada inválida.
        return 1; //Importante para o código. Indica ao programa que encontrou um erro e não pôde ser executado com sucesso.
    }

// Caso o usuário inserir um nº o código irá continuar...

    printf("\nNota inserida: %.2f\n", nota); // Mensagem sobre a nota que foi inserida.
    
    if (nota >= 0 && nota <= 10) { // Condição se a nota inserida for maior ou igual a zero E menor ou igual a 10.
        printf("A nota %.2f é válida.\n", nota); //Caso for verdadeira irá dizer que a nota é válida.
    } else {
        printf("ERRO: A nota inserida (%.2f) é inválida!\n", nota); // Senão, é falsa dizendo que nota inserida é inválida...
        printf("As notas devem estar no intervalo de 0 a 10.\n");// E pedindo para inserir uma nota entre 0 a 10.
    }

    return 0; //Fim do código.
}