#include <stdio.h>


/*
Grupos de funciones 
1.-nada mas imprimir datos
2.-solamente de capturar dayos
llevar a cabo operacions con datos ya plasamos
3.-se encargan de guardar estos 4.-datos ya plasmados y capturados 
*/

//Principio de responsabilidad unica
//Deberia ejecutar unicamente lo que el nombre de la funcion diga
//Puntos para declarar una funcion, 1.- que hara (con el nombre), 2.- determinar el resultado que obtendremos, 3.- 

void ingresarDatos(double *op1, double *op2);
double sumar(double op1, double op2);
void imprimirResultados(double res);

//variable global, no muy recomendable usar
//double op1, op2, resultado;

int main(void) {
  double op1, op2, resultado;
  ingresarDatos(&op1,&op2);
  resultado = sumar(op1,op2);
  imprimirResultados(resultado);
  
  return 0;
}

void ingresarDatos(double *op1, double *op2){
  printf("Ingrese valores para operacion \n");
  scanf("%lf %lf", op1,op2);
}

double sumar(double op1, double op2){
  return op1 +op2;
}

void imprimirResultados(double res){
printf("\n%lf", res);
}
