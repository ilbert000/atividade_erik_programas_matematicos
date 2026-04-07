#include <stdio.h>
#include <math.h> 

int modulo() {
    double num1;

    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);

    double modulo = fabs(num1);

    printf("O modulo de %f eh: %f\n", num1, modulo);

    return 0;
}
