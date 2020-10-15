#include<stdio.h>
#include<stdlib.h>

int quadrado(int valor) /* tem retorno */
{
    valor = valor * valor;
    return valor;
}

void quadradoimprime(int valor) /* nao retorna nada */
{
    int valor2;

    valor2 = valor * valor;

    printf("\n o quadrado do valor %d da funcao imprime  =  %d \n", valor, valor2);
}
main()
{
        int valor, valor2;

    printf("\n digite um valor: ");
    scanf("%d", &valor);

    valor2 = quadrado(valor);

    printf("\n o quadrado do valor %d  =  %d \n", valor, valor2);

    quadradoimprime(valor);
}
