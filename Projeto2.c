#include <stdio.h>
#include <stdlib.h>

int main (){

int func_depart;
int funcionario;
int departs;
int funf;
int maDep;
int meDep;
float salario;
float sal_total;
float porcentagem;
float porcentTot;

float maior = 0;
float menor = 0;

sal_total= 0;
departs = 3;

for (funcionario=1; funcionario <= departs; funcionario++) {
    printf("--------------Departamento %i ----------------- \n", funcionario);
    printf("Digite a quantidade de funcionarios desse departamento: ");
    scanf("%i", &func_depart);

    for (funf=1; funf <= func_depart; funf++){
        printf("\n Colaborador %i: \n", funf);

        printf("Digite o salario desse funcionario: R$ ");
        scanf("%f", &salario);
        sal_total += salario;

        //Calcular porcentagem
        if (salario < 2000) {
            porcentagem++;
        }
    }
    printf("-------------------------------------\n");
    printf("\n\n O salario total do departamento %i e de: R$ %.2f \n", funcionario, sal_total);
    printf(" ------------------------------------ \n\n");
    sal_total = 0;

}
//maior e menor aqui
 if (salario>maior){
    maior = salario;
    maDep = funcionario;
    }
if (salario<menor){
    menor = salario;
    meDep = funcionario;
    }


printf("Maior valor: %.2f do departamento: %i \n", maior, departs);
printf("Menor valor: %.2f do departamento: %i \n", menor,departs);
printf("Porcentagem de pessoa que ganham menos de dois mil e: %.1f %", porcentTot);


return 0;
}
