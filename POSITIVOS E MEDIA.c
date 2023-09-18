#include <stdio.h>
 
int main() {
 
 float NUMERO;
 float MEDIA;
 int VALOR;
 int CONT;
 
 MEDIA = 0;
 VALOR = 0;
 
 for (CONT = 1; CONT <= 6; CONT++) {
     
     scanf("%f", &NUMERO);
     if(NUMERO >= 0) {
         VALOR++;
         MEDIA = MEDIA + NUMERO;
     }
     
 }
 
 printf("%d valores positivos\n", VALOR);
 printf("%.1f\n", MEDIA/VALOR);

    return 0;
}