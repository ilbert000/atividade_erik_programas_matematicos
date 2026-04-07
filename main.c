#include <stdio.h>
#include <time.h>
#include <windows.h>
#include "./operacao/soma_de_dois_numeros.c"
#include "./operacao/o_produto_do_primeiro_pelo_quadrado_do_segundo.c"
#include "./operacao/o_quadrado_do_primeiro_numero.c"
#include "./operacao/a_raiz_quadrado_da_soma_dos_quadrados.c"
#include "./operacao/o_seno_da_diferenca_do_primeiro_numero_pelo_segundo.c"
#include "./operacao/modulo.c"

void esperar(int segundos) {
    Sleep(segundos * 1000);
}

int main() {
    int option;
    printf("==================================\n");
    printf("==================================\n");
    printf("escolha uma das opcoes a baixo: \n 1 - soma de dois numeros \n 2 - o produto fo primeiro numero pelo quadrado do segundo \n 3 - o quadrado do primeiro numero \n 4 - a raiz quadrada da soma de dois quadrados \n 5 - o seno da diferenca do primeiro numero pelo segundo \n 6 - o modulo do primeiro numero\n 7 - sair\n\n");
    printf("qual sua opcao? ");
    scanf("%d", &option);
    printf("==================================\n");
    printf("==================================\n");
    while (option == 1 || option == 2 || option == 3 || option == 4 || option == 5 || option == 6 ) {
        switch (option){
            case 1:
                soma();
                break;
            case 2:
                produto();
                break;
            case 3:
                quadrado();
                break;
            case 4:
                somaQuadrados();
                break;
            case 5:
                seno();
                break;
            case 6:
                modulo();
                break;
            case 7:
                printf("saindo...\n");
                esperar(2);
                break;
            default:
                printf("opcao invalida, tente novamente: \n");
                scanf("%d", &option);
        }
        printf("==================================\n");
        printf("==================================\n");
        printf("escolha uma das opcoes a baixo: \n 1 - soma de dois numeros \n 2 - opcao 2 \n 3 - opcao 3 \n 4 - opcao 4 \n 5 - opcao 5 \n 6 - opcao 6 \n");
        scanf("%d", &option);
        printf("==================================\n");
        printf("==================================\n");
    }
    return 0;
}