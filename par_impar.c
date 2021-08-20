#include <stdio.h>
//par o impar

int main(void) {
  int dato;
  printf("Ingresa un dato entero \n");
  scanf("%i", &dato);

 /* Forma 1
  if(dato%2==0)printf("el numero es PAR");
  if(dato%2==1)printf("el numero es IMPAR");
*/

// Forma mas clara 
  if(dato%2){
    printf("el numero es IMPAR");
  }
  
  else {
    printf("el numero es par");
    }




  return 0;
}