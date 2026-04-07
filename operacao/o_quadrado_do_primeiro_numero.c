#include <stdio.h>
#include <math.h>

quadrado() {
    double n1, resultado;
    int quadrado;

    printf("Digite o numero: \n");
    scanf("%lf", &n1);
    printf("Digite o quadrado: \n");
    scanf("%d", &quadrado);
    
    resultado = pow(n1, quadrado);

    printf("O resultado do quadrado e: %0.2lf\n", resultado);
    return 0;
}