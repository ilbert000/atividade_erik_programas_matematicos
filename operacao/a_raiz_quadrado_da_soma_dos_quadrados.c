#include <stdio.h>  
#include <math.h>

somaQuadrados() {
    double a, b, resultado;
    int potencia;
    
    printf("Digite o primeiro numero: \n");
    scanf("%lf", &a);
    printf("Digite o segundo numero: \n");
    scanf("%lf", &b);
    printf("Digite a potencia: \n");
    scanf("%d", &potencia);

    resultado = sqrt(a*potencia + b*potencia);

    printf("O resultado da raiz quadrada da soma dos quadrados e: %0.2lf\n", resultado);
    return 0;
}