#include <stdio.h>

int main(){

    //Declaração de variáveis
    int number1, number2, number3, sum;

    // Entrada de dados
    printf("Enter the first number: ");
    scanf("%d", &number1);

    printf("Enter the second number: ");
    scanf("%d", &number2);

    printf("Enter the third number: ");
    scanf("%d", &number3);

    // Processamento
    sum = number1 + number2 + number3;

    // Saída de dados
    printf("Sum: %d\n", sum);

    return 0;
}