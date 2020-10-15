#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main()
{
            char nome1[100],nome2[100];
            int quant;

//  digita: N O M E E S O B R E N O M E - 16 char
//      0 1 2 3 4 5 6 7 8 9 10 11 12 16   - '\0'

 /*   printf("\nDigite o nome 1: ");
    gets(nome1);

    setbuf(stdin,NULL);

    printf("\nDigite o nome 2: ");
    gets(nome2);

    // strcmp = comparar string
    // strcasecmp = comparar letras maisculas ou minusculas do mesmo nome

    if(strcasecmp(nome1,nome2)==0) // valor 0 é verdadeiro
    {
        printf("\nNomes Iguais\n");
    }
    else
    {
        printf("\nNomes Diferentes\n");
    }
    */

    printf("\nDigite o nome 1: ");
    gets(nome1);

    //strlen = retorna o numero de letras da palavra

    // strcpy(onde será copiado, o que será copiado)

    quant=strlen(nome1);

    strcpy(nome2,nome1);

    printf("\n o nome 1 tem %d letras",quant);
}
