#include <stdio.h>
#include <string.h>

int quant_alunos;
int i;
char nome_alunos[10][20];
float nota1[10];
float nota2[10];
float media[10];

int main()
{
    // Requerindo as informações:
    puts("\n Informe a quantidade de alunos: ");
    scanf("%d", &quant_alunos);
    fflush(stdin);

    for(i = 0; i < quant_alunos; i++)
    {
        system("cls");

        printf("\n Informe o nome do aluno %d: ", i+1);
        fgets(nome_alunos[i], 20, stdin);
        fflush(stdin);

        printf("\n Informe a nota 1 do aluno %d: ", i+1);
        scanf("%f", &nota1[i]);
        fflush(stdin);

        printf("\n Informe a nota 2 do aluno %d: ", i+1);
        scanf("%f", &nota2[i]);
        fflush(stdin);

        media[i] = (nota1[i] + nota2[i]) / 2;
    }

    //Exibindo os valores:
    for(i = 0; i < quant_alunos; i++)
    {
        puts("\n --------------------------");
        printf("Aluno %d: %s", i+1, nome_alunos[i]);
        printf("\n N1: %.2f", nota1[i]);
        printf("\n N2: %.2f", nota2[i]);
        printf("\n Media: %.2f", media[i]);
    }

    return 0;
}
