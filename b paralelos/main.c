#include <stdio.h>
#include <stdlib.h>
#define TAM 2

int buscarLibre(int[], int);
void mostrarAlumnos(int[], char[][20], int[], int[], float[], int);
float calcularPromedio(int, int);
int cargarAlumno(int[], char[][20], int[], int[], float[], int);

int main()
{
    int legajo[TAM]= {};
    char nombre[TAM][20];
    int nota1[TAM]={0};
    int nota2[TAM]={0};
    float promedio[TAM];
    int opcion;
    int index;
    int i;
    do
    {
        printf("1. ALTAS\n2. MOSTRAR\n3. MODIFICAR\n4.BAJA\n5.ORDENAR (por nombre)\n9. SALIR\nElija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:

            index=cargarAlumno(legajo,nombre,nota1,nota2,promedio,TAM);
            if(index == -1)
            {
                printf("No hay lugar");
            }
            else
            {
                printf("Alumno ingresado");
            }
            break;
        case 2:
       {
        mostrarAlumnos(legajo,nombre,nota1,nota2,promedio,TAM);


        break;
        }
        }


    }
    while(opcion!=9);




    return 0;
}

int buscarLibre(int legajos[], int tam)
{
    int index=-1;
    for(int i=0;i<tam;i++)
    {
        if(legajos[i]!=-1)
        {
            index=i;
            break;
        }


    }


    return index;
}

int cargarAlumno(int legajos[], char nombres[][20], int nota1[], int nota2[], float promedio[], int tam)
{
    int index ;
    index = buscarLibre(legajos, tam);
            if(index!=-1)
            {
                printf("ingrese su legajo:");
                scanf("%d",&legajos);

                 printf("ingrese nota 1");
                scanf("%d",&nota1);

                printf("ingrese nota 2");
                scanf("%d",&nota2);


                printf("ingrese su nombre: ");
                fflush(stdin);
                gets(nombres);


            }
            return index;
}


float calcularPromedio(int nota1, int nota2)
{
    float promedio;
    promedio = (float)(nota1+nota2)/2;
    return promedio;
}

void mostrarAlumnos(int legajos[], char nombres[][20], int nota1[], int nota2[], float promedio[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
            {
                if(legajos[i]!=-1)
                {

                    printf("%d %s %d %d %.2f\n", legajos[i], nombres[i], nota1[i], nota2[i], promedio[i] );
                }

            }

}
