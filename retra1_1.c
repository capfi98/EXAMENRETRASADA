/*
Autor:          carlos Enrique Perez Tortola
Compilador:     gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0
Compilado:      gcc -o retra1_1.out retra1_1.c
Librerias:      stdio, stdlib, time, math
Resumen:        
*/


//librerias
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main () {       //iniciamos valores de distancia y angulos
   time_t t;
   float dist;
   float ang;
   float sang;      //iniciamos suma de distancia y angulos (para el promedio)
   float sdist;
   float pos[]={0,0};       //vector de posicion
   int i=0, n=0;            //inicializar iteracion y intentos 
   //inicializamos el puntero de archivos y lo abrimos mientras se ejecuta el programa
    FILE *pf = fopen("posiciones","wt");        //punteros para guardar posiciones, distancia
    FILE *dt = fopen("distanciavstiempo","wt"); //y angulos
    FILE *at = fopen("angulovstiempo","wt");
   
   printf("Datos Personales \n Nombre: Carlos Enrique Perez Tórtola \n Carne: 201804826");
   printf("\n Brinde un valor para el maximo de iteraciones: ");
   scanf("%d", &n );
   printf("\n ------------------------------------------------- \n");
   /* Intializes random number generator */
   srand((unsigned) time(&t));

    
    while (i<n && pos[0]>-100 && pos[0]<100 && pos[1]>-100 && pos[1]<100) //condiciones, para por los limites, o por iteraciones
    { 
        dist =  rand() % 21;        //numero aleatorio de 0-20
        ang = rand() % 181;         //numero aleatorio de 0-180
        ang = ang*3.141592/180;     //numero aleatorio de 0-pi (en radianes)
        //printf("%f\n", dist);
        //printf("%f\n", ang);
        sang =+ ang;                //suma en cada ciclo los angulos (Suma de Angulos)
        sdist =+ dist;              //suma en cada ciclo las distancias (Suma de Distancias)
        fprintf(at,"%.2f\t%.2d\n",ang, i+1);    //imprimir angulos vs iteracion 
        fprintf(dt,"%.2f\t%.2d\n",dist, i+1);   //imprimir distancia vs iteracion 
        fprintf(pf,"%.2f\t%.2f\n",pos[0], pos[1]);  //imprimir posicion X vs Y 
        pos[0]=dist*cos(ang);                   // coordenadas posicion en X y Y
        pos[1]=dist*sin(ang);   
        printf("%f\t%f\n", pos[0], pos[1]);     //Mostrar al usuario la posicion X y Y
        i++;
    }
    printf("\n ------------------------------------------------- \n");
    printf("Ángulo promedio: %f \n", sang/i);       //imprimir al usuario los datos de interes
    printf("Distancia promedio: %f \n", sdist/i);
    printf("Posición inicial: %d, %d unidades \n", 0, 0);
    printf("Posición final: %f, %f unidades \n", pos[0], pos[1]);
    printf("Cantidad de iteraciones: %d\n", i);
    fprintf(pf,"%.2f\t%.2f",pos[0], pos[1]);
    fclose(pf);
    fclose(dt);
    fclose(at);
   return(0);
}



 
