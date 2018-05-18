#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int a;
    char b;
}dato;
int main()
{
    dato d;
    d.a=5;
    d.b='<';

    dato*pDato;
    pDato=&d;

    printf("%d--%c",pDato,&(d.a));


    printf("TAM: %d\n", sizeof(dato));
    printf("%d--%c",d.a,d.b);

    return 0;
}
