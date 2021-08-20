#include <stdio.h>
#include <math.h>  // Librerias 
#include <time.h>


int main(void) {
  //int dato = 65;
 // char c = 'A';
 /* printf("Hello World\n");
  printf("Hola alumnos de %c",65 ,"\n");*/

 // printf("hola  %clumnos de %i",c,dato);

int op1, op2,resultado;
printf("ingresa los valores para las operaciones \n");

scanf("%i", &op1);
scanf("%i", &op2);
//printf("%i %i \n", op1 , op2 );

resultado = op1 + op2;
printf("El resultado de la suma es: %i \n", resultado);
resultado = op1 - op2;
printf("El resultado de la resta es: %i \n", resultado);
resultado = op1 * op2;
printf("El resultado de la mult es: %i\n", resultado);
resultado = op1 / op2;
printf("El resultado de la div es: %i\n", resultado);
resultado = op1%op2;
printf("El resultado del residuo es: %i\n", resultado);


printf("El resultado de div y residuo es: %i y %i \n", op1/op2, op1%op2);

  return 0;
}