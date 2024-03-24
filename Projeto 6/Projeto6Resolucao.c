#include <stdio.h>
#include <string.h>
#define MAX 100

int main(){

char nome [MAX] [20];
float nota1 [MAX];
float nota2 [MAX];
float media [MAX];
char maiorNome [20];
char menorNome [20];
float maior;
float menor;
int i;
int op;
int k;

maior = 0;
menor = 0;


while(op != 'N'){
    i++;

    printf("\ninforme a nota 1: ");
    scanf("%f", &nota1 [i]);
    fflush(stdin);

    printf("\ninforme a nota 2: ");
    scanf("%f", &nota2 [i]);
    fflush(stdin);

    printf("\nInforme o nome do Aluno: ");
    fgets(nome[i],20,stdin);
    fflush(stdin);

    media [i] = (nota1[i]+nota2[i])/2;

    printf("\nDeseja continuar o lancamento [S]im ou [N]ao");
    op = getchar();
    op = toupper (op);
}

for(k=1; k<=i; k++){

    system("cls");

    if(media[k]>maior){
        strcpy(maiorNome, nome[k]);
        maior = media[k];
    }
    if(media[k]<menor){
        strcpy(menorNome, nome[k]);
        menor = media[k];
    }
}
printf("\nA maior media %s %.2f", maiorNome, maior);
printf("\nA menor media %s %.2f", menorNome, menor);

return 0;
}
