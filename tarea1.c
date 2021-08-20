#include <stdio.h>
#include <math.h>  // Librerias 
#include <time.h>

int main(void) {
/*  Salto de linea
printf("Hola \n");
  printf("Mundo");*/


 /* Caracteres
 printf("apostrofe(\')");
  printf("comillas(\")");
  printf("diagonal invertida(\\)");*/

  //Alarma
  //printf("Alarma \a");

/* Asteriscos
  printf("*Ramon Isaac Pizaña Espinosa*"); */

/* Secuencia de escape , quita el ultimo caracter
printf("Frase de prueba.\r otra frase encima \ny otras\b mas\n"); */

/* Numeros enteros
a) Ejercicio
int x;  
scanf("%i", &x);
printf("Has introducido el numero %i Gracias", x ); */

/* b) Ejercicio
int x;
printf("Cuantos años tiene? \n");
scanf("%i", &x);
printf("Ahora se que tienes %i años, gracias.", x);*/

/* 
//c)Intento de ejercicio 
//int z;
float x;
printf("Que hora es? \n");
scanf("%f" , &x);
printf("Hora introducida ok. \n Son las %g \n",x); */

/* Otro intento de hora
char a,b,c,d,e,f,g,h;
printf("Que hora es? \n");
scanf("%c%c%c%c%c%c%c%c" , &a,&b,&c,&d,&e,&f,&g,&h);
printf("Hora introducida ok. \n Son las %c%c%c%c%c%c%c%c \n",a,b,c,d,e,f,g,h); */


/* Extraido de Stack overflow
time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    printf("%s", asctime(tm));
*/

/* 
1) Leyendo letras 
char a,b,c,d,e,f;
printf("Cuales son sus iniciales? \n");
scanf("%c%c%c%c%c%c",&a,&b,&c,&d,&e,&f);
printf("Sus iniciales son: %c%c%c%c%c%c ",a,b,c,d,e,f); */

/*
2) Leyendo numeros con decimales
char a,b,c,d,e,f;
float x;
printf("Ingresa tus iniciales, y altura aproximada \n");
scanf("%c%c%c%c%c%c%g",&a,&b,&c,&d,&e,&f,&x);

printf("Sus iniciales son: %c%c%c%c%c%c \n \by tu altura es: %g \n",a,b,c,d,e,f,x );
*/


char nombre[20];

scanf("%[^\n]s" , nombre ); // para omitir espacios e imprimir el arreglo
printf("%s" , nombre);

/*
int a,b;
double c;
scanf("%i %i %lf", &a, &b, &c);
printf("%0.2lf %i %i",c,b,a);
*/


  return 0;
}