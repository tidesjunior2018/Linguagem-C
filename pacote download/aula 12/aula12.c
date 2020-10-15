#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
        char banco[3][10]={"CAVALO", "HOMEM", "CACHORRO"};
        int palavra;
        int i;
        char PALAVRA[10];
    /*
    for(i=0;i<10;i++)
    {
        printf("%c", banco[palavra][i]);
    }
    */
    srand(time(NULL));

    palavra = rand() % 3;
    for(i=0;i<10;i++)
    {
        PALAVRA[i] = banco[palavra][i];
    }

    printf("\n \n \n %s \n \n", PALAVRA);


}
