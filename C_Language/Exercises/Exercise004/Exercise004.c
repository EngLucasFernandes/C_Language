#include <stdio.h>

int main(){

    // Declaração de variáveis
    float number, result;

    // Entrada de dados
    printf("Enter a number: ");
    scanf("%f", &number);

    // Processamento
    result = number * number;

    // Saída de dados
    printf("Result: %.2f", result);

    return 0;
}