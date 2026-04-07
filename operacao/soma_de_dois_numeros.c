#include <stdio.h>

soma() {
    double num1, num2, resultado;

    printf("Digite o primeiro numero: \n");
    scanf("%lf", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%lf", &num2);

    resultado = num1 + num2;

    printf("O resultado da soma e: %0.2lf\n", resultado);
    return 0;
}