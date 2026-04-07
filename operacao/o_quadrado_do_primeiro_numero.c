#include <stdio.h>
#include <math.h>

quadrado() {
    double n1, quadrado, resultado;
    
    printf("Digite o numero: \n");
    scanf("%lf", &n1);
    printf("Digite o quadrado: \n");
    scanf("%lf", &quadrado);
    
    resultado = pow(n1, quadrado);

    printf("O resultado do quadrado e: %0.2lf\n", resultado);
    return 0;
}