#include<stdio.h>
#include<stdlib.h>

int imprime(int inicio, int limite)
{
    if(inicio <= limite)
    {
        printf("%d ",inicio);
        imprime(inicio + 1, limite);
    }
}

main()
{
    int inicio, limite, i;

    printf("\n qual o valor do inicio: ");
    scanf("%d", &inicio);

    printf("\n qual o valor do limite: ");
    scanf("%d", &limite);

    printf("\n");

    printf("IMPRESSAO INTERATIVA \n");

    for(i=inicio;i<=limite;i++)
    {
        printf(" %d ",i);
    }

    printf("\n \n");

    printf("IMPRESSAO RECURSIVA \n");

    imprime(inicio,limite);

    printf("\n \n");
}
