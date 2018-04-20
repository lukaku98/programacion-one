#include <stdio.h>
#include <stdlib.h>
#define T 3
# include <string.h>
void varios(int[], char[][30], int[],int[], float[], int tam);
void mostrarAlumno( int[],char[][30], int[], int[], float[],int tam);
void calcularPromedios( int[], int[], float[], int);
int burbuja( int[],char[][30], int[], int[], float[],int tam);

int main()
{
    int leg[T]={1,9,5};
    char alumno[T][30]={"juan","pedro","lucia"};
    int n1[T]={1,10,8};
    int n2[T]={2,20,4};
    float promedios[T]={1.1,2.3,5.6};


    calcularPromedios(n1, n2, promedios, T);

    varios(leg,alumno, n1, n2, promedios, T);


    return 0;
}

void varios(int leg[],char alumno[][30], int n1[], int n2[], float promedios[],int tam ){

     printf("\n legajo alumno Nota1  Nota2 Promedio\n");
     printf("\n ----------------------------\n\n");

        burbuja(leg,alumno, n1, n2, promedios,tam);

        mostrarAlumno(leg,alumno, n1, n2, promedios,tam);


    printf("\n ----------------------------\n\n");

}

void calcularPromedios( int n1[], int n2[], float promedios[], int tam){


for(int i=0; i<tam; i++){
        promedios[i]= (float) (n1[i] + n2[i]) / 2;
    }

}

void mostrarAlumno(int leg[],char alumno[][30], int n1[], int n2[], float promedio[],int tam){

    for(int i=0;i<tam;i++)

     printf("  %d       %s    %d        %d       %0.2f \n",leg[i] ,alumno[i], n1[i], n2[i], promedio[i]);
}
int burbuja (int leg[],char alumno[][30], int n1[], int n2[], float promedio[],int tam)
{
    int aux;
    char c[30];
    float p;
    for(int i=0;i<tam;i++)
    {
        for(int j=i;j<tam;j++)
        {
            if (strcmp(alumno[i],alumno[j])>0)
            {
               strcpy(c,alumno[i]);
               strcpy(alumno[i],alumno[j]);
               strcpy(alumno[j],c);

                aux=leg[i];
                leg[i]=leg[j];
                leg[j]=aux;

                aux=n1[i];
                n1[i]=n1[j];
                n1[j]=aux;

                aux=n2[i];
                n2[i]=n2[j];
                n2[j]=aux;

                p=promedio[i];
                promedio[i]=promedio[j];
                promedio[j]=p;


            }


        }
    }





}
