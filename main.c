#include <stdio.h>
#include <stdlib.h>

int main()
{

    char nombre[20];
    char sexo;
    char nombreMin[20];
    char nombreMax[20];
    char sexoMin;
    char sexoMax;
    char seguir;
    int nota;
    int notaMaxima;
    int notaMinima;
    int contMujeres=0;
    int contador=0;
    int acumNotas=0;
    int acumNotasf=0;
    int flag=0;
    float promedio;
    float promedioF;

    do{
            printf("ingrese nombre: ");
    gets(nombre);
    printf("ingrese sexo f/m: ");
    fflush(stdin);
    scanf("%c,&sexo");

    while(sexo!='f'&&sexo!='m')
    {
        printf("error ingrese sexo _F/M");
        fflush(stdin);
        scanf("%c",&sexo);
    }
    printf("ingrese nota 0-10: ");
    scanf("%d",&nota);
    while(nota<0||nota>10)
    {
        printf("error ingrese nota 0-10:");
        fflush(stdin);
        scanf("&d",&nota);

    }

        printf("\n Quiere continuar?:");
        fflush(stdin);
        //scanf("%c",&seguir);
        seguir=getche();
    }while(seguir=='s');


    return 0;
}
