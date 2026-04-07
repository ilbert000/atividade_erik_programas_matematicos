#include <stdio.h>
#include <math.h>

produto() {
    double n1, n2, resultado;
    int potencia;
    
    printf("Digite o primeiro numero: \n");
    scanf("%lf", &n1);
    printf("Digite o segundo numero: \n");
    scanf("%lf", &n2);
    printf("Digite a potencia: \n");
    scanf("%lf", &n2);
    
    resultado = n1 * pow(n2, potencia);

    printf("O resultado do produto e: %0.2lf\n", resultado);
}
