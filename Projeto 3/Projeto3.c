#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main ()
{

    char sexo, sexMa, teste;
    float salario, mediaSal, salTotal, maiorSalario;
    int idade, habitantes, habs, maIdade, meIdade, mulheres, ricoIdade;

    maIdade = 0;
    meIdade = 500;

    maiorSalario = 0;
    ricoIdade = 0;

    mulheres = 0;


    printf("Digite a quantidade de habitantes na regiao determinada: ");
    scanf("%i", &habitantes);

    for(habs=1; habs <= habitantes; habs++)
    {
        printf("----------- ENTREVISTADO %i ---------------", habs);

        printf("\nDigite a idade do entrevistado: ");
        scanf("%i", &idade);

        printf("\nDigite o sexo do entrevistado,sendo M (maiusculo) para masculino e F (maiusculo) para feminino: ");
        fflush (stdin);
        scanf("%c", &sexo);
        sexo = toupper (sexo);

        if(sexo != 'F' && sexo != 'M')
        {
            printf("\nCampo invalido! Tente novamente: ");
            scanf(" %c", &sexo);
            sexo = toupper (sexo);
        }

        printf("\nDigite o salario do entrevistado:");
        scanf("%f", &salario);

        salTotal += salario;

        //Calcular a maior e menor idade
        if(idade>maIdade)
        {
            maIdade = idade;

        }
        if(idade<meIdade)
        {
            meIdade = idade;
        }

        // Calculo do maior salario
        if(salario>maiorSalario){
            maiorSalario = salario;
            ricoIdade = idade;
            sexMa = sexo;
        }

        // Calculo das mulheres que ganham até 1800
        if(sexo = 'F' && salario <= 1800)
        {
            mulheres++;
        }

    }

    mediaSal = salTotal / habs;

    printf("\nA media salarial dos habitantes dessa regiao e: R$%.2f", mediaSal);
    printf("\nA maior idade dos entrevistados e: %i e a menor idade entre os entrevistados e: %i", maIdade, meIdade);
    printf("\nA quantidade de mulheres que ganham ate R$1.800,00 e: %i", mulheres);
    printf("\nA pessoa com maior salario ganha:R$ %.2f, tem %i anos, do sexo %c ", maiorSalario, ricoIdade, sexMa);


    return 0;
}
