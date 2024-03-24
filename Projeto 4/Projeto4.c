#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main (){

int Q_Op, trabalhadores, N_Op, Q_Pecas, pecasTotal, M_Pecas, H_Pecas, mulheres, homens, mediaH, mediaM;
float salario, salarioTotal;
char sexo;

printf("Digite a quantidade de que operarios tem na fabrica: ");
scanf("%i", &Q_Op);

 for(trabalhadores=1; trabalhadores <= Q_Op; trabalhadores++){
    printf("---------Operario %i -----------", trabalhadores);

    printf("\nDigite o numero do operario: ");
    scanf("%i", &N_Op);

    printf("\nDigite quantas peças que esse operario produz: ");
    scanf("%i", &Q_Pecas);

    printf("\nDigite o salario desse operario: R$ ");
    scanf("%f", &salario);

    printf("\nDigite o sexo do funcionario: ");
    fflush (stdin);
    scanf("%c", &sexo);
    sexo = toupper (sexo);

    salarioTotal += salario;

    pecasTotal += Q_Pecas;

    if(sexo != 'F'){
        M_Pecas += Q_Pecas;
        mulheres ++;
    }
    else if(sexo != 'M'){
        H_Pecas += Q_Pecas;
        homens ++;
    }

    mediaM = M_Pecas / mulheres;

    mediaH = H_Pecas / homens;

 }

 printf("\nO total da folha de pagamento da fabrica e: R$ %.2f", salarioTotal);
 printf("\nA quantidade de peças fabricas nesse mes foi: %i", pecasTotal);
 printf("\nA media de peças fabricas por mulheres e: %i", mediaM);
 printf("\nA media de peças fabricadas por homens e: %i", mediaH);

 //casting
return 0;
}
