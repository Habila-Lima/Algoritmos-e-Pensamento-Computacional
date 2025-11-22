#include <stdio.h>


int main() {
    //Declarando as variáveis.
    double notaAtual;
    double somaNotas = 0.0;
    int contadorNotas = 0;
    
    //Definindo a forma de encerrar o cadastro.
    const double ENCERRAR = -1.0; 
    
    //Mensagem orientadora p/ o usuário.
    printf("------------------------------\n");
    printf("      CÁLCULO DE NOTAS        \n");
    printf("------------------------------\n");
    printf("Para encerrar o cadastro digite -1.0\n", ENCERRAR);
    printf("Digite suas notas:  ");
    
    
    // Garante que o usuário possa cadastrar suas notas.
    do {
        printf("Nota #%d: ", contadorNotas + 1);
        
        // Verifica se a nota é realmento um número. Caso contrário encerra.
        if (scanf("%lf", &notaAtual) != 1) {
            printf("\nERRO: Entrada inválida. Digite sua notas novamente.\n");
            while(getchar() != '\n'); // Getchar: Descarta totalmente o que foi digitado que foi diferente de um nº 
            return 1;
        }

        // Caso o usuário insira -1.0 o cadastramento é encerrado.
        if (notaAtual == ENCERRAR) {
            break; 
        }

        
        // Vai pedir a nota novamente caso não seja entre 0 a 10.
        while (notaAtual < 0.0 || notaAtual > 10.0) {
            printf("Nota inválida! Digite uma nota entre 0 a 10: ");
            if (scanf("%lf", &notaAtual) != 1) {
                printf("\nERRO: Entrada inválida. Digite sua notas novamente.\n");
                while(getchar() != '\n');
                return 1;
            }
           
        }
        
       
        // Operação de contador de notas. Equivalente a (somaNotas = somaNotas + notaAtual)
        somaNotas += notaAtual; 
        contadorNotas++;

    } while (1); // O loop continua até que 'break' seja chamado

    
    
    // Operação para calcular a média.
    double media = somaNotas / contadorNotas;



    // Impressão do Resultado Final
    printf("==============================\n");
    printf("Total de Notas: %d\n", contadorNotas);
    printf("Média Final:    %.2lf\n", media);
    printf("==============================\n");

    return 0;
}