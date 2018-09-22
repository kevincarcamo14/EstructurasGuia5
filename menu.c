#include <conio.h>
#include <stdio.h>

int main() {
     
         
      int numero1, numero2, resta, suma,*puntero1,*puntero2;
     int menu=0;
         printf("\n");
         printf("-----------\n");
         printf("que desea realizar\n");
          printf("1.Ingresar dos numeros enteros\n");
           printf("2.Calcular su suma utilizando punteros\n");
            printf("3.Calcular su resta utilizando punteros\n");
            printf("4.Imprimir la direccion de memoria de cada variable");
            printf("-----------\n");
            scanf("%d",&menu);
            
           if(menu==1){
         //introduce un numero entero      
               printf( "\n   Introduzca el primer numero (entero): " );
    scanf( "%d", &numero1 );
    numero1=*puntero1;
    //introduce el segundo valor
    printf( "\n   Introduzca el segundo numero (entero): " );
    scanf( "%d", &numero2 );
    numero2=*puntero2;

    
           } else if(menu==2){
			   //realiza la suma y la muestra
              suma = *puntero1 + *puntero2;

     printf( "\n   La suma es: %d", suma );
           } else if(menu==3){
			   //realiza la resta y la muestra
                 resta = *puntero1 - *puntero2;
     printf( "\n   La resta  es: %d", resta );
             
           } else if(menu==4){
			   //muestra la direccion del puntero1 y puntero2
               printf( "\n   La direcccion de numero1 es: %d", *puntero1 );
           printf( "\n   La direcccion de numero1 es: %d", *puntero2 );
              
               
           } 
//muestra el resultado del menu            
            printf("\n");
             printf("-------------\n");
    }
