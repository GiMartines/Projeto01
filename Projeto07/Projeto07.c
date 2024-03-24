#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int main (){
int i, num[MAX], quant, k, soma = 0, contador = 0;

printf("Quantos elementos tera esse conjunto? ");
scanf("%d", &quant);

printf("Digite os numeros: \n");
for (i=1; i<=quant; i++){
    fflush(stdin);
    scanf("%d", &num[i]);
}
for (k=1; k<=quant; k++){
    if (num[k]%2 == 0){
        soma += num[k];
    } else
    contador++;
}

printf("\nQuantidade de numeros impares: %d ", contador);
printf("\nSoma dos numeros pares: %d\n", soma);

return 0;
}
