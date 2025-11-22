#include <stdio.h>

int main()
{
    float notas[10];
    int i = 0; // contador de notas
    float media = 0;
    float menor_nota = 11; // Inicializa com valor maior que 10 (para garantir que qualquer nota será menor)
    float maior_nota = -1; // Inicializa com valor menor que 0 (para garantir que qualquer nota será maior)

    while (i < 10)
    {
        printf("Qual a %dª nota? Digite -1 para encerrar: \n", i + 1);
        scanf("%f", &notas[i]);

        if (notas[i] == -1)
        {
            break; // Modo de encerramento
        }

        // Verifica se a nota está entre 0 e 10
        if (notas[i] < 0 || notas[i] > 10)
        {
            printf("Nota inválida! A nota deve estar entre 0 e 10.\n");
            continue; // Pede a nota novamente
        }

        // Se passou pela validação, a nota é válida
        printf("A %dª nota é válida: %.2f\n", i + 1, notas[i]);

        media += notas[i]; // Soma a nota para calcular a média

        // Atualiza o menor e o maior valor
        if (notas[i] < menor_nota)
        {
            menor_nota = notas[i];
        }
        if (notas[i] > maior_nota)
        {
            maior_nota = notas[i];
        }

        i++; // Incrementa o contador de notas
    }

    // Verifica se alguma nota válida foi inserida
    if (i == 0)
    {
        printf("Nenhuma nota válida foi inserida.\n");
    }
    else
    {
        media /= i; // Calcula a média
        printf("\n***Resultado***\n");
        printf("A Média é %.2f\n", media);
        printf("Maior nota = %.2f\n", maior_nota);
        printf("Menor nota = %.2f\n", menor_nota);
    }

    return 0;
}