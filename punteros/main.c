#include <stdio.h>
#include <stdlib.h>

void cargarArray(int*,int);
void mostrarArray()
int main()
{


    int vector[3];

    cargarArray(vector,3);
    mostrarArray(vector,3);

    int*puntero;
    puntero=vector;
    int i;
    for(i=0;i<3;i++)
    {
        printf("ingrese un numero: ");
        scanf("%d", puntero+i);
    }
    for(i=0;i<3;i++)
    {
        printf("%d\n",*puntero+i);
    }
    return 0;
}
