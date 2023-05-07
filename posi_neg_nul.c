// positivo, negativo e nulo.
#include <stdio.h>

int main()
{
    int valor;
    printf("Insira um número: ");
    scanf("%d", &valor);

    if(valor < 0){
        printf("Negativo");
    }

    else
        if(valor > 0){
            printf("Positivo");
        }

    else {
        printf("Nulo");
    }
}