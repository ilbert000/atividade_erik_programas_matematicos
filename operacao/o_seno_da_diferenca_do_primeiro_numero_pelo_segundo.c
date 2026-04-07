#include <stdio.h>
#include <math.h> // Necessário para a função sin()

int seno() {
    double num1, num2, diferenca, resultado;

    printf("Digite o primeiro numero (angulo em radianos): ");
    scanf("%lf", &num1);
    printf("Digite o segundo numero (angulo em radianos): ");
    scanf("%lf", &num2);

    diferenca = num1 - num2;
    resultado = sin(diferenca);

    printf("O seno da diferenca (%f - %f) eh: %f\n", num1, num2, resultado);

    return 0;
}
